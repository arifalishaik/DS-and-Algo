/* Problem Statement:
    Given a string of characters, find the frequencies of each character and print them 
*/

#include <iostream>
using namespace std;
#include <string>
#include <bits/stdc++.h>

// print the frequencies
int print_Frequencies( string a ){
    int length = a.length();
    cout << length << endl;

    // count array to store the frequencies
    int count[26] = {0};

    // storing the occurences of each character in the given string
    for ( int i = 0; i < length; ++i ){
        count[ a[i] - 'a' ]++;
    }

    // iterating over the entire count array
    for ( int i = 0; i < 26; ++i ){
        // print the frequencies
        if ( count[i] > 0 ){
            cout << count[i] << " ";
        }
    }
}

// main function
int main ( void ){
    // declaring a string
    string a;
    // read the string
    cout << "Enter the string :";
    getline( cin, a );

    print_Frequencies( a );
}
