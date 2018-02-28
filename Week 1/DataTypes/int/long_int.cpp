// Author : Arif Ali Shaik

// This program demonstrates the range of long_int
// Generally long int takes 8 Bytes of memory ( 64 bits ), so the range of long int is [ -2^63 to 2^63 - 1 ]

#include <iostream>
using namespace std;

int main(void)
{
    int count = 0;
    long int n = 1;

    while (n != 0)
    {
        cout << " 2 ^ " << count << " = " << n << endl;
        n *= 2;
        ++count;
    }

    cout << endl;
    cout << " After ( 2 ^ " << count - 1 << " )" << " int overflows " << endl;
    cout << " Range of long int  = [ -2^63 to 2^63 - 1 ]" << endl;
    cout << " Author of the Program: S M ARIF ALI" << endl;
}
