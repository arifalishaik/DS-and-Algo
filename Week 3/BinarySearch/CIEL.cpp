

#include <iostream>
using namespace std;
#include <algorithm>

// binary search for CEIL
int BinarySearch( int *arr, int N, int low, int high, int key ){

    if ( key > arr[ N - 1 ] ) return arr[ N - 1 ];

    while ( low < high ){
        if ( arr[ high ] == key ) return arr[ high ];

        int mid = low + ( high - low ) / 2;
        if ( arr[ mid ] == key ) return arr[ mid ];
        else if ( arr[ mid ] < key ){
            low = mid + 1;
        }
        else{
            high = mid;
        }
    }
    return arr[ high ];
}


// main function
int main( void ){
    // size of array
    int N;
    //read size
    cin >> N;

    // declare an Array arr
    int arr[ N ];
    // read values of array
    for ( int i = 0; i < N; ++i ){
        cin >> arr[i];
    }

    sort( arr, arr + N );
    // input the query
    int k;
    // read the query
    cout << "Please enter the key: ";
    cin >> k;

    int m = BinarySearch( arr, N, 0, N - 1, k );
    cout << " CIEL =" << m << endl;
}