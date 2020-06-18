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
    int l,b;
    cin>>l>>b;
    if(l==0||b==0)
        return 0;
        ll area,peri;
        area=l*b;
        peri=2*(l+b);
        if(area>peri){
            cout<<"Area"<<"\n"<<area<<"\n";
        }
        else if (area<peri){
            cout<<"Peri"<<"\n"<<peri<<"\n";
        }
        else{
            cout<<"Eq"<<"\n"<<area<<"\n";
        }
    return 0;
}
