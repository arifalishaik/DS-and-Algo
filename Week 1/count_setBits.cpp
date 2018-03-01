// Author: S M ARIF ALI
// first line of input contains the input N
#include <iostream>
using namespace std;

int count_setBits( long int N )
{
    int count_set_bits = 0;

    // running the while loop till N becomes 0
    while ( N != 0 ){
        N = N & ( N - 1 ) ;
        ++count_set_bits;
    }

    // printing the number of set and unset bits
    cout << "set_bits = " << count_set_bits << endl;
}

int main(void)
{
    long int N;
    cin >> N;
    count_setBits(N);
}