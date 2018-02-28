#include <iostream>
using namespace std;

int main( void ){

    int count = 0;
    unsigned long long int n = 1;

    while ( n != 0 ){
        cout << " 2 ^ " << count << " = " << n << endl;
        n *= 2;
        ++count;
    }

    // printing the value when n = 0 ( overflow )
    cout << " 2 ^ " << count << " = " << n << endl;
    
    cout << " Range of unsigned long long int is [ 0 to 2^64 - 1 ]" << endl;
    cout << " Author of the program: S M ARIF ALI " << endl;

}