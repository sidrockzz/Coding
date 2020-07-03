//
// Created by siddharth on 03/07/20.
//
//GIven a string reverse the string but not the special characters
//str => abcd@12#ef$k
//str1 => abcd12efk copy string wihtout special chars
// str2 => kfe21dcba reverse str1 => str2
#include<bits/stdc++.h>
using namespace std;

// Returns true if x is an aplhabatic character, false otherwise
bool isAlphabet(char x)
{
    return ( (x >= 'A' &&  x <= 'Z') ||
             (x >= 'a' &&  x <= 'z') || (x>=48 && x<=57) );
}

void reverseString(string s)
{
    // Initialize l and r
    int r = s.length() - 1;
    int l = 0;

    //Till l meets r, travers from both ends
    while (l < r)
    {
        // ignore special characters
        if (!isAlphabet(s[l]))
            l++;
        else if(!isAlphabet(s[r]))
            r--;

        else // if both s[l] and s[r] are alphabatical characters
        {
            swap(s[l], s[r]);
            l++;
            r--;
        }
    }
}
int main()
{
    string s;
    cin>>s;
    cout << "Input string: " << s << endl;
    reverseString(s);
    cout << "Output string: " << s << endl;
    return 0;
}
