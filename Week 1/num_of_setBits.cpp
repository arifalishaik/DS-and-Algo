// Author: S M ARIF ALI
// first line of input contains the input N
#include <iostream>
using namespace std;
int setbits( long int N ){

    int set_bits = 0;
    int unset_bits = 0;

    // running the while loop till N becomes 0
    while (N != 0)
    {
        if ( N & 1 ){
            // if LSB of N is 1
            ++set_bits;
        }
        else{
            // if LSB of N is 0
            ++unset_bits;
        }

        // right shifting N by 1 in every iteration
        N = N >> 1;
    }

    // printing the number of set and unset bits
    cout << "set_bits = " << set_bits << endl;
    cout << "unset_bits = " << unset_bits << endl;
}


int main( void ){
    
    long int N;
    cin >> N;
    setbits( N );
}