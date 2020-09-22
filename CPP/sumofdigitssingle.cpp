#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin>>n;
    if(n==0)
    cout<<0<<"\n";
    cout<< ((n%9==0)?9:(n%9))<<"\n";
}