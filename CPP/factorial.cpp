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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("input.txt","x","stdin");
   // freopen('output.txt',"w","stdout");
    unsigned long long n,x=1;
    cin>>n;
    n = n%M;
    if(n<0)
        n+=M;
    REP(i,1,n)
        x = (x*i)%M;
    cout<<x%M<<"\n";
   /// fclose(stdin);
    //fclose(stdout);
    return 0;
}