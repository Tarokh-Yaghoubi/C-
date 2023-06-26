#include <iostream>
#include <fstream>
#include <complex>
#include <zmq.hpp>
#include <fftw3.h>

int main() {
    // Initialize the ZeroMQ context and socket
    zmq::context_t context(1);
    zmq::socket_t socket(context, ZMQ_PULL);
    socket.connect("tcp://localhost:5555");

    // Receive the data from the server
    zmq::message_t message;
    socket.recv(message, zmq::recv_flags::none);
    std::vector<std::complex<float>> out_data(message.size() / sizeof(std::complex<float>));
    memcpy(out_data.data(), message.data(), message.size());

    // Save the data to a file
    std::ofstream out_file("fft_result.txt");
    for (const auto& x : out_data) {
        out_file << x.real() << std::endl;
    }

    // Print DONE on the screen
    std::cout << "DONE" << std::endl;

    // Shutdown the client
    socket.close();
    context.close();
    return 0;

}

