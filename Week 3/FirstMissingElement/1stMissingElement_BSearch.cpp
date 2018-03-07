/* 
Sample Test Case:
N = 9
Elements to be inserted in the array = 1 2 3 4 6 7 15 25 40

o/p:
Missing Element = 5

0 1 2 3 4 5  6   7   8    -----> Indices of Array
1 2 3 4 6 7  15  25  40   -----> Elements of Array

If you observe carefully, arr(i) = i + 1
The first missing element in array is 5 as ar(4) = 6 , It should have been 5 actually. 
So, its a miss match, Hence all the elements after that will also be a miss-match

The condition is: 
arr(i) = i + 1

here i is nothing but mid
*/

#include <iostream>
using namespace std;
#include <algorithm>

int get_MissingElem(int *arr, int N){
    int low = 0;
    int high = N - 1;

    while ( low < high ){

        // calculating mid
        int mid = low + ( high - low ) / 2;
        if ( arr[mid] > ( mid + 1 ) ){
            high = mid;
            cout << " high " << high << endl;
        }
        else if ( arr[mid] == ( mid + 1 ) ){
            low = mid + 1;
            cout << " low " << low << endl;
        }
    }
    return ( low + 1 );
}

int main( void ){
    // size of array
    int N;
    //read N
    cout <<"Enter size of array :" << endl;
    cin >> N;

    // An array of size N
    int arr[ N ];
    // read N elements
    for ( int i = 0; i < N; ++i ){
        cin >> arr[ i ];
    }

    // sort the array as we are using Binary Search
    sort( arr, arr + N );
    int element = get_MissingElem( arr, N );
    cout << "Missing Element = " << element << endl;
}