/* 
    Given an Array, of size N. 
    The array elements start from position 1.  
    The difference between any two elements in the array is 1
    Print the first missing elemet
*/ 

#include <iostream>
using namespace std;

void getMissingElement( int *arr, int N ){

    for ( int i = 0; i < N; ++i ){
        cout << arr[i] << " " << endl; 
    }

    for ( int i = 0; i < N; ++i ){
        if ( arr[i] != i + 1 ){
            cout << "Missing Element = " << ( i + 1 ) << endl;
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
    int arr[ N ];
    cout << "Enter array elements : "<< endl;
    //read N elements
    for ( int i = 0; i < N; ++i ){
        cin >> arr[ i ];
    }
    
    getMissingElement( arr, N );
}
