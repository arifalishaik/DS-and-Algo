// Author: S M ARIF ALI
// this program demonstrates the range of unsigned char
// Char takes 1 Byte of Memory. Range of unsigned char is 0 to 255 or 0 to 2^8 - 1

#include <iostream>
using namespace std;

int main(void)
{
    int count = 0;
    unsigned char n = 1;

    while ( n != 0 )
    {
        cout << " 2 ^ " << count << " = " << n << endl;
        n *= 2;
        ++count;
    }

    cout << " Char overflows exactly at = 2 ^ " << count << endl;
    cout << " Range of unsigned char  = [ 0 to 255 ] or [ 0 to 2^8 - 1 ]" << endl;
    cout << " Author of the Program: S M ARIF ALI" << endl;
}