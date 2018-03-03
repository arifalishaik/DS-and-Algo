// Author: S M Arif Ali
// Given range of array elements are in the following elements
// low <= arr(i) <= high  for all i =  0 t0 N, N is the size of the array
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

// CountSort function
void countSort( int *arr, int N, int low, int high ){
    int count[ high - low + 1 ];
    memset( count, 0, sizeof( count ) );

    // creating a count array
    for ( int i = 0; i < N; ++i ){
        // subtracting every array element with low to make sure count array starts from zero
        count[ arr[i] - low ]++;
    }

    // iterating over the count array and changing the original given array
    int k = 0;
    for ( int i = 0; i < ( high - low + 1 ); ++i ){
        for ( int j = 0; j < count[i]; ++j ){
            arr[ k++ ] = i + low;
        }
    }
}   

// main function
int main ( void ){
    int N;
    cin >> N;

    // declaring array of size N
    int arr[ N ];
    // reading N elements of arr7
    for ( int i = 0; i < N; ++i ){
        cin >> arr[ i ];
    }

    // taking the range of elements in arr  
    // low <= arr[i] <= high   for i = 0 to N
    // low is the lowest element of the array arr
    // high is the highest element of the array arr
    int low, high;
    cin >> low >> high;

    // calling the count sort
    countSort( arr, N, low, high );

    // printing the sorted array
    for ( int i = 0; i < N; ++i ){
        cout << arr[i] << " ";
    }
}