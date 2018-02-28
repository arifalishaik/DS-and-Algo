// Author : Arif Ali Shaik

// this program demonstrates the range of short int
// Generally short int takes 2 Bytes of memory (16 bits), so the range of short int is [ -2^15 to 2^15 - 1 ]

#include <iostream>
using namespace std;

int main( void )
{
    int count = 0;
    short int n = 1;

    while ( n != 0 )
    {
        cout << " 2 ^ " << count << " = " << n << endl;
        n *= 2;
        ++count;
    }

    cout << endl;
    cout << " After ( 2 ^ " << count - 1 << " )" << " short int overflows " << endl;
    cout << " Range of short int  = [ -2^15 to 2^15 - 1 ]" << endl;
    cout << " Author of the Program: S M ARIF ALI" << endl;
}
