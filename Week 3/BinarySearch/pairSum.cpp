#include <iostream>
using namespace std;
#include <algorithm>

// logic of binary search
int BinarySearch( int *arr, int N, int low, int high, int key ){
    // base condition
    if ( low > high )
        return -1;
    //calculating the mid
    int mid = ( low + high ) / 2;
    // if key is present at mid
    if ( key == arr[mid] )
        return arr[mid];
    else if ( key < arr[mid] ){
        // recursive call to first half of array and so on
        return BinarySearch( arr, N, low, mid - 1, key );
    }
    else{
        // recursive call to second half of array and so on
        return BinarySearch(arr, N, mid + 1, high, key);
    }
}

// Check for pairs
void getPairs( int *arr, int N, int key ){

    for ( int i = 0; i < N; ++i ){
        int b = key - arr[i];
        int x = BinarySearch( arr, N, 0, N - 1, b );

        if ( x != -1 ){
            cout << "Pair is possible: ";
            cout << arr[i] << "," << x << endl;
        }
        // else{
        //     cout << "Sorry! No pair found" << endl;
        // }
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
    for (int i = 0; i < N; ++i){
        cin >> arr[i];
    }
    // sort the array
    sort( arr, arr + N );

    // read the key
    int key;
    cout << "Enter the element to be searched :";
    cin >> key;

    getPairs( arr, N, key );
    int x = BinarySearch( arr, N, 0, N - 1, key );
    cout << "Element found at :" << x << endl;
}