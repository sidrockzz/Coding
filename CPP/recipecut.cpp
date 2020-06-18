//
// Created by siddharth on 18/06/20.
//
#include<bits/stdc++.h>
#include <vector>
#define M 1000000007
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define SQ(a) (a)*(a)
using namespace std;
typedef long long ll;
typedef vector<int>vi;
typedef pair<int,int>pi;
int gcd(int a,int b){
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int s =a[0];
        for(int i=1;i<n;i++){
            s=gcd(s,a[i]);
        }
        for(int i=0;i<n;i++)
            cout<<a[i]/s<<" ";
        cout<<"\n";
    }
    return 0;
}
