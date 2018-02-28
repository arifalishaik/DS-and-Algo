// first line of input contains a positive number n, prints its binary number and
// print its negative equivalent in binary

#include <iostream>
using namespace std;

int main( void ){

    int x = 10;
    // Two complement of x = ( ones complement of x ) + 1 
    int y = -x;

    for (int i = 31; i > 0; --i)
    {
        (x & 1 << i) ? cout << 1 : cout << 0;
    }

    cout << endl;

    for ( int i = 31; i > 0 ; --i ){

        ( y & 1 << i ) ? cout << 1 : cout << 0;
    }

    cout << endl;
}