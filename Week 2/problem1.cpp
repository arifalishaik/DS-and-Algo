/*
Given A is an Array

following are the conditions 

#i,j
0 <= i < j <= N
arr(i) > arr(j)

calculate the number of pairs possible in the given array satisfying the above conditions

The Same Question can be solved using MergeSort
*/


#include <iostream>
using namespace std;

// calculating the number of possible pairs
void getPairs( int *arr, int N ){
    int count = 0;

    for( int i = 0; i < N - 1; ++i ){
        for( int j = i + 1; j < N; ++j ){
            if( arr[i] > arr[j] ){
                ++count;
                cout << arr[i] << "," << arr[j] << endl;
            }
        }
    }

    cout << count << endl;
}

// main function
int main(void)
{
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

    getPairs( arr, N );
}
