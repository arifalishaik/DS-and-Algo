#include <iostream>
using namespace std;

int main( void ){
    // read the size of two arrays N and M
    int N, M;
    cout << "Enter the size of first array: ";
    cin >> N;

    cout << "Enter the size of second array: ";
    cin >> M;

    // creating two arrays
    int a[N], b[M];

    // read the first array elements
    for ( int i = 0; i < N; ++i ){
        cin >> a[i];
    }

    // read the second array elements
    for ( int i = 0; i < M; ++i ){
        cin >> b[i];
    }

    sort_ab( a, b, N, M );
}


void sort_ab( int *a, int *b, int N, int M ){
    int p = 0;
    int q = 0;

    while( p < N && q < M ){
        if( b[q] < a[p] ){
            int temp = a[p];
            a[p] = a[q];
            insert(temp);
        }else{
                
        }
    }
}

void insert( int temp ){

}