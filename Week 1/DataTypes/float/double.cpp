// ANSI 3.1.2.5 The representations and sets of values of the various types of floating-point numbers
// The double type contains 64 bits: 1 for the sign, 11 for the exponent, and 52 for the mantissa. Its range is +/- 1.7E308 with at least 15 digits of precision.


#include <iostream>
using namespace std;
#include <iomanip>

int main( void ){
    double n = 1.0 / 10.0;

    cout << setprecision(100) << fixed;
    cout << n << endl;
}