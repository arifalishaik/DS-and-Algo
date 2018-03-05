#include <iostream>
using namespace std;

// InsertionSort Logic
void InsertionSort( int *arr, int N ){
    for ( int i = 1; i < N; ++i ){
        int value = arr[i];
        int hole = i;

        while ( hole > 0 && arr[ hole - 1 ] > value ){
            arr[ hole ] = arr[ hole - 1 ];
            hole = hole - 1;
        }

        arr[ hole ] = value;
    }
}

void printArray( int *arr, int N ){
    //print array elements
    for( int i = 0; i < N; ++i ){
        cout << arr[i] << " ";
    }
}

// main function
int main( void ){

    // Size of array
    int N;
    //read N
    cin >> N;

    // Array of size N
    int arr[N];
    // reading array elements to be sorted
    for ( int i = 0; i < N; ++i ){
        cin >> arr[i];
    }

    InsertionSort( arr, N );
    printArray( arr, N );
}

/* Time Complexity:

for i = 1 to N

for each i the loop runs till N
for i = 1, No. of iterations = N - 1
for i = 2, No. of iterations = N - 2
for i = 3, No. of iterations = N - 3
for i = 4, No. of iterations = N - 4
....
....
....
....
for i = N-1,  No. of iterations = 1

N-1 + N-2 + N-3 + ................. + 1
which is 
1 + 2 + 3 + 4 + ..................+ N - 1

N * ( N - 1 ) / 2

This is the worst case Time Complexity when array is reverse sorted
*/
