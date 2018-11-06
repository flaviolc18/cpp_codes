//
// server.cpp
// ~~~~~~~~~~
//
// Copyright (c) 2003-2008 Christopher M. Kohlhoff (chris at kohlhoff dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#include <ctime>
#include <iostream>
#include <string>
#include <boost/bind.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/enable_shared_from_this.hpp>
#include <boost/asio.hpp>

using boost::asio::ip::tcp;

std::string make_daytime_string()
{
  using namespace std; // For time_t, time and ctime;
  time_t now = time(0);
  return ctime(&now);
}

//rhis class constructor is a static function that returns a pointer to this object which need to be alive as ong as there is an operation that refers to it
class tcp_connection
  : public boost::enable_shared_from_this<tcp_connection>
{
public:
  typedef boost::shared_ptr<tcp_connection> pointer;

  static pointer create(boost::asio::io_service& io_service)
  {
    return pointer(new tcp_connection(io_service));
  }

  tcp::socket& socket()
  {
    return socket_;
  }

  void start()
  {
    message_ = make_daytime_string();

    //asynchronously write to a stream (our socket) and call a handler function when it terminates to write all the buffer or when an error is found, you must follow the handler doc's signature
    boost::asio::async_write(socket_, boost::asio::buffer(message_),
        boost::bind(&tcp_connection::handle_write, shared_from_this(),
          boost::asio::placeholders::error,
          boost::asio::placeholders::bytes_transferred));
  }

private:
  tcp_connection(boost::asio::io_service& io_service)
    : socket_(io_service)
  {
  }

  void handle_write(const boost::system::error_code& /*error*/,
      size_t /*bytes_transferred*/)
  {
  }

  tcp::socket socket_;
  std::string message_;
};

class tcp_server
{
public:
	// initializes an acceptor to listen to a tcp port
  tcp_server(boost::asio::io_service& io_service, int port)
    : acceptor_(io_service, tcp::endpoint(tcp::v4(), port))
  {
    start_accept();
  }

private:
  void start_accept()
  {
    //create a new tcp_connection pointer
    tcp_connection::pointer new_connection =
      tcp_connection::create(acceptor_.get_io_service());

    // this function is used to asynchronously accept a tcp connection and return imeadiately, it needs the peer (socket endpoint) and the handler (function to call when receive a connection)
    acceptor_.async_accept(new_connection->socket(),
        boost::bind(&tcp_server::handle_accept, this, new_connection,
          boost::asio::placeholders::error));
  }

//this function starts the handling of a new connection and then call the method to accept more connections
  void handle_accept(tcp_connection::pointer new_connection,
      const boost::system::error_code& error)
  {
    if (!error)
    {
      new_connection->start();
      start_accept();
    }
  }

  tcp::acceptor acceptor_;
};

int main(int argc, char *argv[])
{
  try
  {

		if(argc != 2)
			std::cout << "usage: ./program_name port";
		// provides i/o services such as sockets
    boost::asio::io_service io_service;
		//server object from our class
    tcp_server server(io_service, atoi(argv[1]));
		//Run the boost::asio::io_service object so that it will perform asynchronous operations on your behalf.
    io_service.run();
  }
  catch (std::exception& e)
  {
    std::cerr << e.what() << std::endl;
  }

  return 0;
}
