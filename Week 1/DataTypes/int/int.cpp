// Author : Arif Ali Shaik

// this program demonstrates the range of int
// Generally int takes 4 Bytes of memory (32 bits), so the range of int is [ -2^31 to 2^31 - 1 ]

#include <iostream>
using namespace std;

int main( void ){

    int count = 0;
    int n = 1;

    while( n != 0 ){
        cout << " 2 ^ " << count << " = " << n << endl;
        n *= 2;

        ++count;
    }

    cout << endl;
    cout << " After ( 2 ^ " << count - 1 << " )" << " int overflows " << endl;
    cout << " Range of int  = [ -2^31 to 2^31 - 1 ]" << endl;
    cout << " Author of the Program: S M ARIF ALI" << endl;
}
