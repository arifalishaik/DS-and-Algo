/*
Input Format

First line of input contains T - number of test cases. Its followed by 2T lines, the first line contains N -
the size of the array and second line contains the elements of the array.

Output Format

Print the 2 repeated numbers in sorted manner, for each test case, separated by new line. 

Sample Input 0

2
8
1 3 2 3 4 6 5 5 
10
1 5 2 8 1 4 7 4 3 6 
Sample Output 0

3 5
1 4

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void countSort(int *arr, int N)
{

    // declaring a count array of size N + 1
    int count[N + 1];
    memset(count, 0, sizeof(count));

    for (int i = 0; i < N; ++i)
    {
        count[arr[i]]++;
    }

    for (int i = 0; i < N + 1; ++i)
    {
        if (count[i] > 1)
        {
            cout << i << " ";
        }
    }

    cout << endl;
}

int main(void)
{

    // No. of test cases
    int T;
    cin >> T;

    // running the loop for every test case
    for (int i = 0; i < T; ++i)
    {

        // size of array
        int N;
        cin >> N;

        // declaring an array of N + 2 size as per problem statement
        int arr[N];
        for (int i = 0; i < N; ++i)
        {
            cin >> arr[i];
        }

        countSort(arr, N);
    }
    return 0;
}
