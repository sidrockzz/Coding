//
// Created by siddharth on 07/07/20.
//
#include <bits/stdc++.h>
using namespace std;
#define SIZE 100000 + 1


// Transform S into new string with special characters inserted.
string convertToNewString(const string &s) {
    string newString = "@";

    for (int i = 0; i < s.size(); i++) {
        newString += "#" + s.substr(i, 1);
    }

    newString += "#$";
    return newString;
}

int longestPalindromeSubstring(const string &s) {
    string Q = convertToNewString(s);
    int c = 0, r = 0;                // current center, right limit
    int P[SIZE * 2]={0};
    for (int i = 1; i < Q.size() - 1; i++) {
        // find the corresponding letter in the palidrome subString
        int iMirror = c - (i - c);
        if(r > i) {
            P[i] = min(r - i, P[iMirror]);
        }
        // expanding around center i
        while (Q[i + 1 + P[i]] == Q[i - 1 - P[i]]){
            P[i]++;
        }
        // Update c,r in case if the palindrome centered at i expands past r,
        if (i + P[i] > r) {
            c = i;              // next center = i
            r = i + P[i];
        }
    }
    // Find the longest palindrome length in p.
    int maxPalindrome = 0;
    int centerIndex = 0;
    for (int i = 1; i < Q.size() - 1; i++) {
        if (P[i] > maxPalindrome) {
            maxPalindrome = P[i];
            centerIndex = i;
        }
    }
    cout << maxPalindrome << "\n";
}

int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        string s;
        cin>>s;
        longestPalindromeSubstring(s);
    }
    return 0;
}