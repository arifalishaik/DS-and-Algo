// Author: S M ARIF ALI
// this program demonstrates the range of char. 
// Char takes 1 Byte of Memory. Range of chat is -128 to 127
// 


#include <iostream>
using namespace std;

int main( void ){

    int count = 0;
    char n = 1;

    // for ( int i = 0; i < 128; ++i ){
    //     cout << i << "=" << n << endl;
    //     ++n;
    //     ++count;
    // }

    while ( n != 0 ){
        cout << " 2 ^ " << count << " = " << n << endl;
        n *= 2;
        ++count;
    }

    cout << " Char overflows after = 2 ^ " << count - 1 << endl; 
    cout << " Range of char  = [ -128 to 127 ] or [ -2^7 to 2^7 - 1 ]" << endl;
    cout << " Author of the Program: S M ARIF ALI" << endl;
}