// Author: SM Arif Ali
// Given two different arrays of size N and M, 
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void sort_AB( int *A, int *B, int N, int M ){

    // sort the given two arrays A and B
    sort( A, A + N );
    sort( B, B + M );
    
    // declaring an array of size M + N 
    int arr[ M + N ] = {0};
    // p and q are pointers to be traversed on array A and B respectively
    int p = 0;
    int q = 0;
    int k = 0;

    // travesrsing along both the arrays and pushing the min element into newly declared array arr
    // this is basically the merge procedure
    while ( p < N && q < M ) {
        if ( A[p] < B[q] ){
            arr[ k++ ] = A[ p++ ];
        }
        else{
            arr[ k++ ] = B[ q++ ];
        }
    }

    // left over array elements A and pushing them into array arr
    while ( p < N ){
        arr[ k++ ] = A[ p++ ]; 
    }

    // left over array elemets of B and pushing them into array arr
    while ( q < M ){
        arr[ k++ ] = B[ q++ ];
    }

    for ( int i = 0; i < N; ++i ){
        cout << arr[i] << " ";
    }
}


// main function
int main( void ){
    // Enter the sizes of Arrays
    int N, M;
    cout << "Enter the sizes of two Array's";
    cin >> N >> M;

    // declaring the size of arrays
    int A[ N ], B[ N ];
    
    // reading elements of array A
    cout << "Enter the elements of A" << endl;
    for( int i = 0; i < N; ++i ){
        cin >> A[ i ];
    }

    // reading elements of array B
    cout << "Enter the elements of B" << endl;
    for ( int i = 0; i < M; ++i ){
        cin >> B[ i ];
    }

    // calling sort function
    sort_AB( A, B, N, M );
}


/* Time Complexity of the Sort_AB funtion: 

    M + N 

    We are traversing through the entire array of A and B of sizes N and M respectively. 
    So, their timecomplexities are M and N

*/
