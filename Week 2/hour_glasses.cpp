#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <algorithm>    // std::max

using namespace std;


int MAX_SUM ( int arr[][6] ){

        // storing the lowest possible negative number of long int range
        // This is done basically as array elements can contain negative numbers
        long int max_sum  = LONG_MIN;

        // itereating the given array with ( rows = rows -2 ) and ( column = coloumns - 2 ) times 
        for( int i = 0; i < 4; i++ ){
           for( int j = 0; j < 4; j++ ){
            
               // calculating the sum in hour glasses pattern
                int temp_sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] 
                        + arr[i + 1][j + 1] 
                        + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2 ];

                // if any hour glass sum is > max_sum then, make it equal to max_sum
                if ( temp_sum >= max_sum ){
                    max_sum = temp_sum;
                }
           }
        }

    return max_sum;
}

// main function
int main(){
    
    int arr[6][6];
    // reading array elements
    for ( int i = 0; i < 6; ++i ){
        for ( int j = 0; j < 6; ++j ){
            cin >> arr[i][j];
        }
    }
    
    //get MAX SUM of all the hour glasses
    int max_sum = MAX_SUM( arr ); 
     
    cout << max_sum << endl;
    return 0;
}
