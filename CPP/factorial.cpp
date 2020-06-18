//
// Created by siddharth on 18/06/20.
//

#include<bits/stdc++.h>
#define M 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("input.txt","x","stdin");
   // freopen('output.txt',"w","stdout");
    long long n,x=1;
    cin>>n;
    for(int i =1;i<=n;i++)
        x = (x*i)%M;
    cout<<x%M<<"\n";
   /// fclose(stdin);
    //fclose(stdout);
    return 0;
}