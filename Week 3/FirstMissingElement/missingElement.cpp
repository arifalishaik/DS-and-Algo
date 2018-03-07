/* 
    Given an Array, of size N. 
    The array elements start from position 0
    The difference between any two array elements is 1  
    Print the first missing elemet
*/

#include <iostream>
using namespace std;

void getMissingElement( int *arr, int N ){

    cout << "The Given array is :";
    for ( int i = 0; i < N; ++i ){
        cout << arr[i] << " " << endl;
    }

    for ( int i = 0; i < N; ++i ){
        if ( arr[ i ] != ( i + arr[ 0 ] ) ){
            cout << "Missing Element = " << i + arr[ 0 ] << endl;
            break;
        }
    }
}

// main function
int main( void ){

    // size of array
    int N;
    cout << "Enter N :";
    // read array
    cin >> N;

    // declare array
    int arr[N];
    cout << "Enter array elements : " << endl;
    //read N elements
    for ( int i = 0; i < N; ++i ){
        cin >> arr[i];
    }

    getMissingElement( arr, N );
}
