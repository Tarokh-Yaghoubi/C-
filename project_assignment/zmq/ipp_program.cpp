#include <iostream>
#include <fftw3.h>
#include <zmq.hpp>
#include <vector>
#include <complex>

// using namespace std;

//using namespace zmq;

int main(int argc, char* argv[])
{
    // Write your code here 

   // Define input vector of 5 complex numbers
    std::vector<std::complex<double>> input = {{1.0, 0.0}, {2.0, 0.0}, {3.0, 0.0}, {4.0, 0.0}, {5.0, 0.0}};

    // Allocate memory for FFTW input and output arrays
    fftw_complex* in = reinterpret_cast<fftw_complex*>(input.data());
    fftw_complex* out = reinterpret_cast<fftw_complex*>(fftw_malloc(sizeof(fftw_complex) * 5));

    // Create FFTW plan for computing the FFT
    fftw_plan plan = fftw_plan_dft_1d(5, in, out, FFTW_FORWARD, FFTW_ESTIMATE);

    // Execute the FFT plan
    fftw_execute(plan);

    // Print the FFT result
    std::cout << "FFT result: ";
    std::cout << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << out[i][0] << " + " << out[i][1] << "i " << std::endl;
    }
    std::cout << std::endl;

    // Clean up FFTW resources
    fftw_destroy_plan(plan);
    fftw_free(out);

    return 0;

}
