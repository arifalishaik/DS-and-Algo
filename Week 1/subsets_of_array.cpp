// Author: S M ARIF ALI
// this program prints all the subsets of a given number

#include <iostream>
using namespace std;
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>

// check if the bit is set or not
bool checkBit( int i, int j ){
    if ( i & ( 1 << j ) ) {
        return true;
    }
}

// priting all the subsets
void printSubsets( vector< vector<int> > arr2 ){
    for ( int i = 0; i < arr2.size(); ++i ){
        for( int j = 0; j < arr2[i].size(); ++j ){
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
}

// main function
int main( void ){
    int N;
    cin >> N;

    int arr[ N ];
    // reading the array elements
    for ( int i = 0; i < N; ++i ){
        cin >> arr[i];
    }
    // sorting the given array initially
    sort( arr, arr + N );

    // declaring a vector of vectors
    vector< vector <int> > arr2;
    for ( int i = 0; i < ( 1 << N ); ++i ){
        // declaring a vector for each row of the arr2 vector( declared above )
        vector<int> temp;
        for ( int j = 0; j < N; ++j ){
            if ( checkBit( i, j ) ){
                temp.push_back( arr[j] );
            }
        }
        // pushing each row into arr2 vector
        arr2.push_back( temp );
    }

    // finally sorting the arr2 vector, so that we can print the subsets in the lexicographical order
    sort ( arr2.begin(), arr2.end() );
    printSubsets( arr2 );
}