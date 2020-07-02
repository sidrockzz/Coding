//
// Created by siddharth on 02/07/20.
//
#include<bits/stdc++.h>
using namespace std;
// Given number is n and k find the kth largest factor
int main(){
    int n,k,i,a=0,arr[50];
    cin>>n;
    cin>>k;
    //finds all the factors
    for(int i=1;i<=n;i++){
        if(n%i==0){
            arr[a]=i;
            a++;
        }
    }
  /*  for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }*/
  //If the factors is less than given k return 1
  if(a<k){
      cout<<"1\n";
  }
  else{
      cout<<arr[a-k]<<"\n";
  }
return 0;
}
