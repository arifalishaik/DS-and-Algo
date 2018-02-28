// Author : Arif Ali Shaik

// this program demonstrates the range of unsinged short int
// Generally unsingend short int takes 4 Bytes of memory (32 bits), so the range of int is [ -2^31 to 2^31 - 1 ]

#include <iostream>
using namespace std;

int main(void)
{
    int count = 0;
    unsigned short int n = 1;

    while ( n != 0 )
    {
        cout << " 2 ^ " << count << " = " << n << endl;
        n *= 2;
        ++count;
    }

    //printing the overflow
    cout << " At 2 ^ " << count << " = " << n << endl;

    cout << endl;
    cout << " At 2 ^ " << count << " unsigned short int overflows " << endl;
    cout << " Range of unsigned short int  = [ 0 to 2^16 - 1 ]" << endl;
    cout << " Author of the Program: S M ARIF ALI" << endl;
}
