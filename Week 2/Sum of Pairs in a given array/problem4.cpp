#include <iostream>
using namespace std;
#include <algorithm>

// print the array
void printArray( int *arr, int N ){
    for ( int i = 0; i < N; ++i ){
        cout << arr[i] << " ";
    }
}

// getting the pairs
void sort_array(int *arr, int N, int key)
{
    sort(arr, arr + N);

    for( int i = 0; i < N - 2; i++ ){
        int p0 = i;
        // cout <<  "p0 =" << arr[p0] << endl; 
        int p1 = p0 + 1;
        int p2 = N - 1;

        while( p1 < p2 ){
            int sum = arr[p1] + arr[p2];
            // cout << sum << endl;
            int k = key - arr[p0];
            // cout << k << endl;

            if( sum == k ){
                cout << arr[p0] << "," << arr[p1] << "," << arr[p2] << "," <<  endl;
                ++p1;
                --p2;
            }else if( sum < k ){
                ++p1;
            }else if( sum > k ){
                --p2;
            }
        }
    }

    /* Brute Force approach - O(N^3) Worst Case Scenario
    for ( int i = 0; i < N - 1; ++i ){
        for ( int j = i + 1; j < N; ++j ){
            if ( arr[i] + arr[j] == key ){
                cout << arr[i] << "+" << arr[j] << endl;
            }
        }
    }
    */
}

// main function
int main( void )
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

    int key;
    // Enter the key to be searched
    cout << "Enter key to be searched: ";
    cin >> key;

    sort_array ( arr, N, key );
    printArray(arr, N);
}