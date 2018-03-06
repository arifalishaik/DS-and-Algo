// This is the generic version of MergeSort
#include <iostream>
using namespace std;
int count = 0;

// print the array
void printArray(int *arr, int N)
{
    for (int i = 0; i < N; ++i)
    {
        cout << arr[i] << " ";
    }
}

// merge procedure
void merge( int *arr, int low, int mid, int high ){
    int temp[ high - low + 1 ];
    int p1 = low;
    int p2 = mid + 1;
    int k = 0;


    while ( p1 <= mid && p2 <= high ){
        if ( arr[ p1 ] < arr[ p2 ] ){
            temp[ k++ ] = arr[ p1++ ];
        }
        else{
            temp[ k++ ] = arr[ p2++ ];
            count = count + ( mid - p1 ) + 1;
            cout << count << endl;
        }
    }

    while ( p1 <= mid ){
        temp[ k++ ] = arr[ p1++ ];
    }
        

    while ( p2 <= high ){
        temp[ k++ ] = arr[ p2++ ];
    }

    for( int i = low; i <= high; ++i ){
        arr[i] = temp[ i - low ];
    }

 
}


void mergeSort( int *arr, int low, int high ) {
    if ( low == high )
        return;
    int mid = ( low + high ) / 2;
    mergeSort( arr, low, mid );
    mergeSort( arr, mid + 1, high );
    merge( arr, low, mid, high );
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
        cin >> arr[i];
    }

    mergeSort( arr, 0, N - 1 );
    printArray( arr, N );
    cout << endl
         << count << endl;
}

