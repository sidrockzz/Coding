//
// Created by siddharth on 16/06/20.
//
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int a,b;
    while (cin >> a >> b)
    {
        int count = 0;
        while (a <= b)
        {
            a = 3*a;
            b = 2*b;
            count++;
        }
        cout << count << endl;
    }
    return 0;
}

