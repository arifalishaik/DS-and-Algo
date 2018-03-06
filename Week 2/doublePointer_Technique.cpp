#include <iostream>
using namespace std;

// Question: Given a array of 0s and 1s, sort them in order

// print the array
void printArray( int *arr, int N ){
    for ( int i = 0; i < N; ++i ){
        cout << arr[i] << " ";
    }
}

void pointerTechnique( int *arr, int N ){
    int p1 = 0;
    int p2 = N - 1;

    // while loop
    while ( p1 < p2 ){
        
        if (arr[p1] == 1 && arr[p2] == 0)
        {
            int temp = arr[p1];
            arr[p1] = arr[p2];
            arr[p2] = temp;
        }

        while( arr[p1] == 0 ){
            ++p1;
        }

        while( arr[p2] == 1 ){
            --p2;
        }
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

    // call the sorting method
    pointerTechnique( arr, N );
    printArray( arr, N );
}