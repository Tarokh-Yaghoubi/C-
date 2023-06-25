#include <iostream>
#include <zmq.hpp>
#include <string>


using namespace std;

int main() {
    // Create a ZMQ context and socket
    zmq::context_t context(1);
    zmq::socket_t socket(context, zmq::socket_type::req);

    // Connect the socket to the server
    std::string address = "tcp://localhost:5555";
    socket.connect(address);

    // Send a message to the server and receive the echoed message
    std::string message = "Hello, world!";
    zmq::message_t request(message.size());
    memcpy(request.data(), message.data(), message.size());
    socket.send(request);

    zmq::message_t reply;
    socket.recv(&reply);

    // Convert the message to a string and print it
    std::string echoed_message = std::string(static_cast<char*>(reply.data()), reply.size());
    std::cout << "Server echoed message: " << echoed_message << std::endl;

    return 0;

}
