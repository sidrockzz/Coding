//
// Created by siddharth on 18/06/20.
//

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
    for(int i=0;i<n;i++) {
        if(arr[i]==arr[i+1]){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}
