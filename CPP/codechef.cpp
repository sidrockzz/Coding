//
// Created by siddharth on 06/07/20.
//
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,res=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n-1;i++){
            res = res + abs(a[i]-a[i+1]);
        }
        cout<<res - (n-1)<<"\n";
    }
}
