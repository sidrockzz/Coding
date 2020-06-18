//
// Created by siddharth on 16/06/20.
//
#include<bits/stdc++.h>
#include<cmath>
using namespace std;

using namespace std;
int pow(int a, int b){
    if(b==0) return 1;
    int ret = pow(a,b/2);
    ret *= ret;
    if(b&1) ret *= a;
    return ret%10;
}
int main(){
    int t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        cout<<pow(a%10,b)<<endl;
    }
    return 0;
}


