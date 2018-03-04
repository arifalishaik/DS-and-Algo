// Sort the array whose range is given as 
// -10^9 <= arr[ i ] <= 10^9 + 7
//  -10^9 is the minimum possible element in the array and 10^9 + 7 is the maximum element in the array

#include <iostream>
using namespace std;
#include <bits/stdc++.h>

// range of the array elements
long int low = 10000000000;
long int high = 10000000007;

// count sort
int countSort( long int *arr, long int N ){
    long int count[ high - low + 1 ];
    memset( count, 0, sizeof(count) );

    for ( int i = 0; i < N; ++i ){
        count[ arr[i] - low ]++;
    }

    for ( int i = 0; i < high - low + 1; ++i )
    {
        cout << count[ i ] << endl;
    }

    int k = 0;
    for ( int i = 0; i < ( high - low ) + 1; ++i ){
        for ( int j = 0; j < count[ i ]; ++j ){
            arr[ k++ ] = i + low;
        }
    }

}

int main( void ){

    int N;
    cout << "Enter the Size of array \n";
    cin >> N;

    // declaring an array of size N
    long int arr[ N ];

    // make sure the entered array elements are in the range [ low, high ] inclusively
    for ( int i = 0; i < N; ++i ){
        cin >> arr[ i ];
    }

    countSort( arr, N );

    for (int i = 0; i < N; ++i){
        cout << arr[i] << endl;
    }
} 