//
// Created by siddharth on 16/06/20.
//
#include<bits/stdc++.h>
using namespace std;

int countRect(int n){
    int ans = 0;
    for (int length = 1; length <= sqrt(n); ++length)
        for (int height = length; height*length <= n; ++height)
            ans++;
    return ans;
}

int main() {
    int n;
    cin>>n;
    cout<<countRect(n)<<endl;
    return 0;
}

