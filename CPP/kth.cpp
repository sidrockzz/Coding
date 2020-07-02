//
// Created by siddharth on 02/07/20.
//
#include<bits/stdc++.h>
using namespace std;
// Given number is n and k find the kth largest factor
int main(){
    int n,k,i,c=0;
    cin>>n;
    cin>>k;
    //finds all the factors
    for(int i=n;i>=1;i--){
        if(n%i==0) {
            c++;
        }
        if(c==k){
            cout<<i<<"\n";
            break;
        }
    }
    if(c<k)
        cout<<"1\n";
return 0;
}
