// Author: S M ARIF ALI
// this program sets the bits of given respective positions and prints the number
#include <iostream>
using namespace std;

// setting the bits at given respective positions and returning the number back
long int get_Number( int a, int b ){
    if( a == b ){
        return (1L << a);
    }
    return ( 1L << a ) + ( 1L << b );
}

// main function
int main( void ){
    int a, b;
    // reading the bit positions to be set
    cin >> a >> b;

    // get the number with bit postions a and b set
    long int num = get_Number( a, b );
    cout << num << endl;
}