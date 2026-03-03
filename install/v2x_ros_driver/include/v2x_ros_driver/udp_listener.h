#pragma once

#include <boost/asio/ip/udp.hpp>
#include <boost/signals2/signal.hpp>
#include <boost/asio/strand.hpp>

#include <array>
#include <iostream>
#include <string>
#include <deque>

namespace cav
{

/**
 * @brief UDPListener is a helper class that manages listening on a UDP socket
 * and passing received packets to subscribers
 */
class UDPListener : public std::enable_shared_from_this<UDPListener>
{
    boost::asio::io_service& io_;
    boost::asio::ip::udp::socket socket_;
    std::atomic<bool> running_;
    bool started_;
    boost::asio::ip::udp::endpoint remote_endpoint_;
    std::array<uint8_t, 65535> recv_buffer_;

    /**
     * @brief starts asynchronous listening on udp socket. Uses
     * reactor-style listening so that we can dynamically detect the length of the packet
     * received
     */
    void start_recv_udp()
    {
        socket_.async_receive_from(
            boost::asio::buffer(recv_buffer_),
            remote_endpoint_,
            [this](const boost::system::error_code& ec, size_t bytes) { handle_recv_udp(ec, bytes); });
    }

    /**
     * @brief Handles received packets
     * @param ec
     * @param bytes_transferred
     */
    void handle_recv_udp(const boost::system::error_code& ec, std::size_t bytes_transferred)
    {
        if(!ec || ec == boost::asio::error::operation_aborted)
        {
            if (bytes_transferred > 0)
            {
                std::shared_ptr<std::vector<uint8_t>> buf = std::make_shared<std::vector<uint8_t>>(
                    recv_buffer_.begin(), recv_buffer_.begin() + bytes_transferred);
                io_.post([this,buf](){onReceive(buf);});
            }

            //Should only continue if we are still running
            if(running_)
                start_recv_udp();

        }
        else
        {
            onError(ec);
        }

    }

public:

    /**
     * @brief Constructs a UDPListener
     * @param io - an io_service object to service the asynchronous IO
     * @param host - the address to listen on
     * @param port - the port to listen on
     */
    UDPListener(boost::asio::io_service& io, unsigned short port) : io_(io), socket_(io_),running_(false), started_(false)
    {
        boost::system::error_code ec;

        socket_.open(boost::asio::ip::udp::v6(), ec);
        if (!ec)
        {
            socket_.set_option(boost::asio::ip::v6_only(false), ec);
            if (!ec)
            {
                socket_.bind(boost::asio::ip::udp::endpoint(boost::asio::ip::udp::v6(), port), ec);
            }
        }

        if (ec)
        {
            socket_.close();
            socket_.open(boost::asio::ip::udp::v4());
            socket_.bind(boost::asio::ip::udp::endpoint(boost::asio::ip::udp::v4(), port));
        }
    }

    virtual ~UDPListener()
    {
        try{
            stop();
        }catch(...)
        {

        }
    }

    /**
     * @brief Called when the internal socket is closed and the UDPListener is no longer listening
     */
    boost::signals2::signal<void ()> onClose;

    /**
     * @brief Called on socket asio error
     */
    boost::signals2::signal<void (const boost::system::error_code&)> onError;

    /**
     * @brief Called on packet received
     */
    boost::signals2::signal<void (const std::shared_ptr< const std::vector<uint8_t>>&)> onReceive;


    /**
     * @brief Starts the
     * @return
     */
    bool start()
    {
        if(running_.exchange(true)) return false;
        start_recv_udp();
        return true;
    }

    void stop()
    {
        if(!running_.exchange(false)) return;
        onClose();
    }
};


}