#include <iostream>
using namespace std;

// swap function
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Bubble sort logic
void BubbleSort( int *arr, int N ){
    bool swapped;
    for ( int i = 0; i < N - 1; ++i ){
        swapped = false;
        for ( int j = 0; j < (N - i) - 1; ++j ){
            if ( arr[j] > arr[ j+1 ] ){
                swap( &arr[j], &arr[ j+1 ] );
                swapped = true;
            }
        }

        // If there are no swaps after the first iteration then, break as it is
        // obvious that the array is already sorted
        if ( swapped == false )
            break;
    }
}

// print the array
void printArray( int *arr, int N ){
    for ( int i = 0; i < N; ++i ){
        cout << arr[i] << " ";
    }
}

int main( void ){
    // read the size of array
    cout << "Enter the size of array" << endl;
    int N;
    cin >> N;

    // an array of size N
    int arr[N];
    // read array elements
    for( int i = 0; i < N; ++i ){
        cin >> arr[i];
    }

    BubbleSort( arr, N );
    printArray( arr, N );
}

