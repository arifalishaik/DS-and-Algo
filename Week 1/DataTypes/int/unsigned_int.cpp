// Author : Arif Ali Shaik

// this program demonstrates the range of unsinged int
// Generally unsigned int takes 4 Bytes of memory (32 bits), so the range of unsinged int is [ 0 to 2^32 - 1 ]

#include <iostream>
using namespace std;

int main( void )
{
    int count = 0;
    unsigned int n = 1;

    while ( n != 0 )
    {
        cout << " 2 ^ " << count << " = " << n << endl;
        n *= 2;
        ++count;
    }

    // printing the value when n = 0
    cout << " 2 ^ " << count << " = " << n << endl;

    cout << " At 2 ^ " << count << " unsigned int overflows " << endl;
    cout << " Range of unsigned int  = [ 0 to 2^32 - 1 ]" << endl;
    cout << " Author of the Program: S M ARIF ALI" << endl;
}
