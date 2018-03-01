// Author: S M ARIF ALI
// This program prints the value for a^b. Both a and b are given as input
// Since the out put can be large we are using modulo with a very large number 10000000007

// But here is the problem. If a = 2 and b = some very large number like 10^9 
// Therefore, 10^9 iterations by a for loop may result in timeout on most online judges
// so this Algorithm is not efficient for calulating the power of a given very large number

#include <iostream>
using namespace std;

// calculating a^b
int power( int a, int b )
{
    long int power = 1;
    for ( int i = 0; i < b; ++i )
    {
        // % is necessary as the out put can be very very large
        power = ( power * a ) % 1000000007;
    }

    cout << power << endl;
}

// main function
int main( void ){
    long int a, b;
    cin >> a >> b;

    power( a, b );
}
