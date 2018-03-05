#include <iostream>
using namespace std;
#include <bits/stdc++.h>

// sort_AB
void sort_AB( int *a, int *b, int N, int M ){
    int arr[ N + M ];
    memset( arr, 0, sizeof(arr) );

    int temp = 0;
    // copying elements of a into array arr
    for ( int i = 0; i < N; ++i ){
        arr[ temp++ ] = a[ i ];
    }

    // copying elements of b into array brr from the last filled position
    for ( int i = 0; i < M; ++i ){
        arr[ temp++ ] = b[ i ];
    }

    // sorting the array arr
    sort( arr, arr + ( N + M ) );

    // printing the sorted array
    for( int i = 0; i < N+M; ++i ){
        cout << arr[i] << " ";
    }
}

int main ( void ){
    // Enter the sizes of Arrays
    int N,M;
    cin >> N >> M;

    // declaring arrays of sizes N and M
    int a[N], b[M];

    // reading array elements of A
    for( int i = 0; i < N; ++i ){
        cin >> a[i];
    }

    // Condition: Elements in array a is > elements in Array b
    // reading array elements of B
    for( int i = 0; i < M; ++i ){
        cin >> b[i];
    }

    sort_AB( a, b, N, M );
}

