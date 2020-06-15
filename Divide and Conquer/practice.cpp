//
// Created by siddharth on 15/06/20.
//
#include<bits/stdc++.h>
using namespace std;

long long sum (long long ar[],long long n){
    long long sum1=0;
    for(long long i=0;i<n;i++){
        sum1=sum1+ar[i];
    }
    return sum1;
}

int main(){
    int n;
    cin>>n;
    long long ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    cout<< sum(ar,n);
    return 0;
}
