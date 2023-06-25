#include <iostream>
#include <zmq.hpp>
#include <string>

using namespace std;


int main() {
    // Create a ZMQ context and socket
    zmq::context_t context(1);
    zmq::socket_t socket(context, zmq::socket_type::rep);

    // Bind the socket to a port
    std::string address = "tcp://*:5555";
    socket.bind(address);
    cout << "SERVER STARTED TO WORK .. " << endl;
    // Wait for incoming messages and echo them back to the client
    while (true) {
        zmq::message_t request;

        // Receive the message from the client
        socket.recv(request);

        // Convert the message to a string
        std::string message = std::string(static_cast<char*>(request.data()), request.size());
        cout << message;
        // Echo the message back to the client
        zmq::message_t reply(message.size());
        memcpy(reply.data(), message.data(), message.size());
        socket.send(reply);
    }

    return 0;

}
