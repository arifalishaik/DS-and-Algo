#include <iostream>
using namespace std;

void swap( int *xp, int *yp ){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// SelectionSort Logic
void SelectionSort( int *arr, int N ){

    for( int i = 0; i < N - 1; ++i ){
        int min = i;
        for( int j = i + 1; j < N; ++j ){
            // locking the first element in every iteration and checking it with all N -i  elements 
            if( arr[j] < arr[ min ] ){
                min = j;
            }
        }
        swap( &arr[i], &arr[ min ] );
    }
}

// print the array
void printArray( int *arr, int N ){
    for ( int i = 0; i < N; ++i ){
        cout << arr[i] << " ";
    }
}

// main function
int main( void ){
    // size of Array
    int N;
    // read size of array
    cin >> N;

    // decalring an array of size N
    int arr[N];
    // read elements for array arr
    for ( int i = 0; i < N; ++i ){
        cin >> arr[ i ];
    }

    SelectionSort( arr, N );
    printArray( arr, N );
}


/* 
Time Complexity: O(n2) as there are two nested loops.

Auxiliary Space: O(1)
The good thing about selection sort is it never makes more than O(n) swaps and 
can be useful when memory write is a costly operation.

*/