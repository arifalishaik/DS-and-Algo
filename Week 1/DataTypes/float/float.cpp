// Author: Arif ALi Shaik

// float is a very interesting data type to study. Unlike int, float has no range
// ANSI 3.1.2.5 The representations and sets of values of the various types of floating-point numbers

// The float type contains 32 bits: 1 for the sign, 8 for the exponent, and 23 for the mantissa. Its range is +/- 3.4E38 with at least 7 digits of precision.

#include <iostream>
using namespace std;
#include <iomanip>

int main( void ){
    float n = 1.0 / 10.0;

    cout << setprecision(100) << fixed;
    cout << n << endl;
}