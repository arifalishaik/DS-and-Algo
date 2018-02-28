// The long double type contains 80 bits: 1 for the sign, 15 for the exponent, and 64 for the mantissa.
// Its range is +/- 1.2E4932 with at least 19 digits of precision.
// Note that with the Microsoft C compiler, the representation of type long double is identical to type double.

#include <iostream>
using namespace std;
#include <iomanip>

int main( void )
{
    long double n = 1.0 / 10.0;

    cout << setprecision( 100 ) << fixed;
    cout << n << endl;
}