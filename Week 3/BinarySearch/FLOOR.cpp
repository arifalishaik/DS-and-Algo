/* 

Given is a array A of size N with following elements:
A: -1 5 2 8 20 8
Given Query is: k = 15

find the least possible element in array A that is <= k
Read the following conditions:

N-1
  max( ar(i) ) <= k;
i = 0

*/
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int ans = INT_MIN;

// searching the given query
int BinarySearch( int *arr, int N, int low, int high, int key ){

    // while ( low < high ){

    //     int mid = low + ( high - low + 1 ) / 2;
    //     if( arr[mid] == key ) return arr[mid];
    //     else if( arr[mid] <  key ){       
    //     }
    // }


    /*
    By Using below code, if the array is of size 10: 1 2 3 4 5 6 7 8 9 10
    and key is 10, 
    Pleae check the sample_output.png. Its a good learning. 

    even though mid value finally becomes 10, it ll not be able to enter the else if condition as 
    arr[mid] < k i.e 10 < 10 condition fails

    So it is better to use iterative programs
    
    */
    if ( key < arr[0] ) return ans;

    while ( low < high ){

        if (arr[low] == key) return arr[low];

        int mid = low + ( high - low + 1 ) / 2;
        cout << "mid =" << mid;

        if ( arr[mid] == key )  return arr[mid];
        else if( arr[mid] < key ){
            low = mid;
            cout << " low = " << low;
        }else{
            high = mid - 1;
        }
    }
    return arr[low];
}

// main function
int main( void ){
    // size of array
    int N;
    //read size
    cin >> N;

    // declare an Array arr
    int arr[N];
    // read values of array
    for ( int i = 0; i < N; ++i ){
        cin >> arr[ i ]; 
    }

    sort( arr, arr + N );
    // input the query
    int k;
    // read the query
    cout << "Pleas enter the key: ";
    cin >> k;

    int m = BinarySearch( arr, N, 0, N - 1, k );
    cout << " Floor =" << m << endl;
}