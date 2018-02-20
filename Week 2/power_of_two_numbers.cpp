#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long int pow( long long int a, long long int b ){
    
    long long int result = 1;
    while ( b != 0 ){
        
        if ( b & 1 )
            result = ( result * a ) % 1000000007;
        a = ( a * a ) % 1000000007;
        
        b >>= 1;
    }
    
    return result % 1000000007;
}

int main() {
    
    int T;
    cin >> T;
    
    for ( int i = 0; i < T; ++i )
    {
        long long int a;
        long long int b;
        cin >> a >> b;
        
        long long int result = pow( a, b ); 
        
        cout << result << endl;
    }
    return 0; 
}
  
