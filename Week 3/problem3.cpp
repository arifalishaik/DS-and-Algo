/*
Given an array of N elements
which may have -ve elements and also may be repetitive elements

Given another set queries, for each query you need to print the number of occurences in 
the original array
*/

#include < iostream >
#include < algorithm >
using namespace std;

int get_Frequencies( int *arr, int N, int key ){
    int low = 0;
    int high = N - 1;

    while ( low <= high ){
        int mid = low + ( high - low ) / 2;

        if( arr[ mid ] != arr[ mid-1 ] ) {
            int count = 0;
            while ( arr[ mid ] == key ){
                ++count;
                ++mid;
            }
            return count;
        }

        if ( arr[ mid ] == key ){
            high = mid;
        }else if ( arr[ mid ] > key ){
            high = mid - 1;
        }else if ( arr[ mid ] < key ){
            low = mid + 1;
        }
    }
    return -49;
}


int main( void ){
    // size of array
    int N;
    //read N
    cout << "Enter size of array :" << endl;
    cin >> N;

    // An array of size N
    int arr[ N ];
    // read N elements
    for ( int i = 0; i < N; ++i ){
        cin >> arr[ i ];
    }
    sort( arr, arr + N );

    // Q Queries
    int Q;
    // read Q
    cout << "Enter No. of Queries :" << endl; 
    cin >> Q;
    // An array of size Q
    int queries[ Q ];
    // read Q queries
    for ( int i = 0; i < Q; ++i ){
        cin >> queries[i];
    }

    for ( int i = 0; i < Q; ++i ){

        int frequency = get_Frequencies( arr, N, queries[i] );
        cout << "Frequency of " << queries[i] << " = " << frequency << endl;
    }
}

/* Bug 
            A very Big Doubt 
            if array has only three elements say N = 3
            And array is 1 2 2
            Queries are 1 and 2

            Output: for 1  No. of Occurences  = 1
                    for 2  No. of Occurences  = 2
   
// Doubt is: Why arr[ mid - 1 ] is 0 i.e how arr[ - 1 ] is = 0
if ( arr[ mid ] == key && arr[ mid - 1 ] != key ){
            cout << "mid = " << mid << endl;
            cout << "mid - 1 = " << arr[-10] << endl;
            int count = 0;

            // traversing from first occurence of key till last occurence
            while ( arr[ mid ] == key ){
                ++mid; 
                ++count;
            }
            return count;
        }
*/