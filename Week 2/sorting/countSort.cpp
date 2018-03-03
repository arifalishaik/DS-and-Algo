#include <iostream>
using namespace std;
#include <bits/stdc++.h>

// algorithm for countSort
int countSort( int *arr, int N, int M )
{
    // Generally if you are declaring an array of size 10,
    // then the indexes you can access are from 0 to 9 i.e arr[0] to arr[9]

    // So here M is the Max element present in the original array.
    // we will take this element's value as index value and access this in the count array.
    // So, it should be M + 1
    int count[ M + 1 ];
    memset( count, 0, sizeof( count ) );

    for ( int i = 0; i < N; ++i ){
        count[ arr[i] ]++;
    }

    // // printing the count array
    // for ( int i = 0; i < M + 1; ++i ){
    //     cout << count[ i ] << " ";
    // }

    cout << endl;

    int k = 0;
    for ( int i = 0; i < M + 1; ++i ){
        for ( int j = 0; j < count[ i ]; ++j ){
            arr[k++] = i;
        }
    }

    // printing the count array
    for ( int i = 0; i < N; ++i)
    {
        cout << arr[i] << " ";
    }

    // T.c = M + 1 + N
}

int main( void ){
    int N;
    cin >> N;
    int arr[ N ];

    for ( int i = 0; i < N; ++i ){
        cin >> arr[ i ];
    }

    int M = 600;
    countSort( arr, N, M );
}