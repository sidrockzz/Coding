//
// Created by siddharth on 28/06/20.
//

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int a1[m];
    for(int i=0;i<m;i++){
        cin>>a1[i];
    }
    int m1;
    cin>>m1;
    int b[m1];
    for(int i=0;i<m1;i++)
        cin>>b[i];
    int count[n+1];
    for(int i=0;i<=n;i++){
        count[a1[i]]++;
    }
    for(int i=0;i<=n;i++){
        if(count[b[i]]!=1)
            count[b[i]]++;
    }
    int sum=0;
    for(int i=0;i<=n;i++){
        sum = sum +count[i];
    }
    if(sum==n)
        cout<<"I become the guy";
    else
        cout<<"Oh, my keyboard!";
}

