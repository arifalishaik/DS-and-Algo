#include <iostream>
using namespace std;
#include <algorithm>

// logic of binary search
int BinarySearch(int *arr, int N, int low, int high, int key){
    // base condition
    if (low > high)
        return -1;
    //calculating the mid
    int mid = (low + high) / 2;
    // if key is present at mid
    if (key == arr[mid])
        return arr[mid];
    else if (key < arr[mid]){
        // recursive call to first half of array and so on
        return BinarySearch(arr, N, low, mid - 1, key);
    }
    else{
        // recursive call to second half of array and so on
        return BinarySearch(arr, N, mid + 1, high, key);
    }
}

// Check for pairs
void getPairs(int *arr, int N, int key){

    for( int i = 0; i < N - 1; ++i ){
        int a = arr[i];
        for( int j = i + 1; j < N; ++j ){
            int b = arr[j];
            int c = key - ( a + b );
            int temp = BinarySearch( arr, N, 0, N - 1, c );

            if( temp > 0 ){
                cout << "Pairs are possible ";
                cout << a << "," << b << "," << temp << endl;
            }
            // else{
            //     cout << "Sorry, No Pairs found!" << endl;
            // }        
        }
    }
}

// main function
int main(void){
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
    // sort the array
    sort(arr, arr + N);

    // read the key
    int key;
    cout << "Enter the element to be searched :";
    cin >> key;

    getPairs(arr, N, key);
    int x = BinarySearch(arr, N, 0, N - 1, key);
    cout << "Element found at :" << x << endl;
}