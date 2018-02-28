// Author: S M ARIF ALI
// first line of input is the given number N. We need return the value of 2^N

#include <iostream>
using namespace std;

// 1 << N is equivalent to 1 * 2^N. So, it goes and sets 2^N th bit of 1
long int power_of_2( long int N ){
    // goes and sets the bit of 2^N and return the result.
    // here L after 1 is necessary to convert to long int as by default it is int and int has only 32 bits
    return 1L << N;
}

int main( void ){
    long int N;
    cin >> N;
    // displaying the result
    cout << power_of_2( N );
}

// Observe the pattern of 2^a ( a = 1,2,3,4,5,6,.............)
/*  2^0 = 0000 0001
    2^1 = 0000 0010
    2^2 = 0000 0100
    2^3 = 0000 1000
    2^4 = 0001 0010

    2^5 = 0010 0000
    2^6 = 0100 0010
    2^7 = 1000 0100
*/

// Exaclty only one bit is set