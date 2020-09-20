#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n,c,d;
    cin>>n;
    if(n%4==2){
        c = n *5;
        d = c + 10;
        cout<<c<<","<<d;
        return 0;
    }
    else if(n%4==3){
        d = n * 5 + 5; 
        c = -d;
        cout<<c<<","<<d;
        return 0;
    }
    else if(n%4==0){
        c = - n * 5;
        d = - n * 5;
        cout<<c<<","<<d;
        return 0;
    }
    else if(n%4==1){
        c = n * 5 + 5;
        d =  -(c-10);
        cout<<c<<","<<d;
        return 0;
    }
}