/* 
Given an array of N elements which has all 2 equal elements except 1, 
They are sorted in order. 
*/


#include <iostream>
using namespace std;
#include <algorithm>

int get_Elem( int *arr, int N )
{
    int low = 0;
    int high = N - 1;

    while ( low <= high ) {
        int mid = low + (high - low) / 2;
        cout << "mid =" << mid;

        if (arr[mid] != arr[mid + 1] && arr[mid] != arr[mid - 1])
        {
            return arr[mid];
        }
        else if (mid & 1)
        {
            if (arr[mid] == arr[mid - 1])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        else
        {
            if (arr[mid] == arr[mid + 1])
            {
                low = mid + 2;
            }
            else
            {
                high = mid - 2;
            }
        }
    }
    return -459;
}

int main( void ){
    // size of array
    int N;
    //read N
    cout << "Enter size of array :" << endl;
    cin >> N;

    // An array of size N
    int arr[N];
    // read N elements
    for ( int i = 0; i < N; ++i ){
        cin >> arr[i];
    }

    // sort the array as we are using Binary Search
    sort( arr, arr + N );
    int element = get_Elem( arr, N );
    cout << "Missing Element =" << element << endl;
}   


