// Author: S M ARIF ALI
// This program prints the value for a^b. Both a and b are given as input
// Since the out put can be large we are using modulo with a very large number 10000000007

// But here is the problem. If a = 2 and b = some very large number like 10^5 or >. 
// The Time Complexity of your program should not be O(b) as it may often result in timeout of the program while iterating b times. ( here b is > 10^5 )
// so this Algorithm is not efficient for calulating the power of a given very large number

// So this progam calulates very efficiently

#include <iostream>
using namespace std;

// calculating a^b
long long int power( long long int a, long long int b ){
    
    long long int power = 1;
    while ( b != 0 ){
        if( b & 1 ){
            power = ( power * a ) % 1000000007;
        }
        a = (a * a) % 1000000007;
        b = b >> 1;
    }
    cout << power << endl;
}

// main function
int main( void ){
    long long int a, b;
    cin >> a >> b;
    power( a, b );
}