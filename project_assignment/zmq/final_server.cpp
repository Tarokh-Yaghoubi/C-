#include <iostream>
#include <fstream>
#include <complex>
#include <random>
#include <zmq.hpp>
#include <fftw3.h>

int main() {
    // Generate 1000 random float numbers
    std::mt19937 gen(0);
    std::uniform_real_distribution<float> dis(0.0, 1.0);
    std::vector<float> data(1000);
    for (auto& x : data) {
        x = dis(gen);
    }

    std::ofstream out_file("data.txt");
    for (const auto& x : data) {
        out_file << x << std::endl;
    }

    std::vector<std::complex<float>> in_data(1000);
    std::ifstream in_file("data.txt");
    
    for (auto& x : in_data) {
        float real_part;
        in_file >> real_part;
        x.real(real_part);
    }

    fftwf_plan plan = fftwf_plan_dft_1d(1000, reinterpret_cast<fftwf_complex*>(in_data.data()), reinterpret_cast<fftwf_complex*>(in_data.data()), FFTW_FORWARD, FFTW_ESTIMATE);
    fftwf_execute(plan);
    fftwf_destroy_plan(plan);

    zmq::context_t context(1);
    zmq::socket_t socket(context, ZMQ_PUSH);
    socket.bind("tcp://*:5555");

    // Send the data to the client
    zmq::message_t message(in_data.size() * sizeof(std::complex<float>));
    memcpy(message.data(), in_data.data(), message.size());
    socket.send(message, zmq::send_flags::none);

    std::cout << "SENT" << std::endl;

    socket.close();
    context.close();
    return 0;

}

