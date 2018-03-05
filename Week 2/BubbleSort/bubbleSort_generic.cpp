#include <iostream>
using namespace std;

void swap( int *a, int *b )
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort( int *arr, int N ){

    for( int i = 0; i < N - 1; ++i ){
        // Last i elements are already in place
        for ( int j = 0; j < N - i - 1; ++j ){
            
            if( arr[ j + 1 ] < arr[ j ] ){
                // swap the two adjacent elements
                swap( &arr[ j ], &arr[ j+1 ] );
            }
        }
    }
}

void printArray( int *arr, int N ){
    for ( int i = 0; i < N; ++i ){
        cout << arr[i] << " ";
    }
}

int main( void ){
    // Enter the size of the array N
    int N;
    cin >> N;

    // declaring the size of the array N
    int arr[N];
    
    // reading the array elements
    for ( int i = 0; i < N; ++i ){
        cin >> arr[i];
    }

    bubbleSort( arr, N );
    printArray( arr, N);
}

/*
Time Complexity: 
Even for a sorted array, the time complexity remains same. Therefore it looks
bubblesort is not best suited
*/