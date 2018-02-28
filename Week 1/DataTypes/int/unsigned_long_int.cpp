// Author : Arif Ali Shaik

// This program demonstrates the range of unsigned long_int
// Generally unsigned long int takes 8 Bytes of memory ( 64 bits ), so the range of unsigned long int is [ 0 to 2^64 - 1 ]

#include <iostream>
using namespace std;

int main(void)
{
    int count = 0;
    unsigned long int n = 1;

    while ( n != 0 )
    {
        cout << " 2 ^ " << count  << " = " << n << endl;
        n *= 2;
        ++count;
    }

    // printing the value when n = 0
    cout << " 2 ^ " << count << " = " << n << endl;


    cout << endl;
    cout << " At 2 ^ " << count << " long int overflows " << endl;
    cout << " Range of unsigned long int  = [ 0 to 2^64 - 1 ]" << endl;
    cout << " Author of the Program: S M ARIF ALI" << endl;
}
