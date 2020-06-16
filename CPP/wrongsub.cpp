//
// Created by siddharth on 16/06/20.
//
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long k,n;
    cin>> k>>n;
    for(int i=0;i<n;i++){
        if(k%10!=0){
            k--;
        }
        else{
            k=k/10;
        }
    }
    cout<<k<<endl;
    return 0;
}
