#include <iostream>
using namespace std;
#include <algorithm>

int BinarySearch( int *arr, int N, int low, int high, int key ){

    sort( arr, arr + N );

    while ( low <= high ){
        int mid = low + ( high - low ) / 2;

        if ( key == arr[mid] )
            return mid;
        else if ( key < arr[mid] ){
            high = mid - 1;
        }
        else if( key > arr[mid] ){
            low = mid + 1;
        }
    }
    return -1;
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
    for (int i = 0; i < N; ++i){
        cin >> arr[i];
    }

    // read the key
    int key;
    cout << "Enter the element to be searched :";
    cin >> key;

    int x = BinarySearch( arr, N, 0, N - 1, key );
    cout << "Element found at :"  << x << endl;
}

