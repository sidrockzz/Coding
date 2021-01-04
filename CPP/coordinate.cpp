#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,x,y;
        cin>>n>>k>>x>>y;
        vector<pair<int,int>>a;
        if(x==y){
            cout<<n<<" "<<n<<endl;
        }
        else{
            if(x<y){
                a.push_back(make_pair(x+n-y,n));
                a.push_back(make_pair(n,n+x-y));
                a.push_back(make_pair(y-x,0));
                a.push_back(make_pair(0,y-x));
            }
            else{
                a.push_back(make_pair(y+n-x,n));
                a.push_back(make_pair(n,y+n-x));
                a.push_back(make_pair(0,x-y));
                a.push_back(make_pair(x-y,0));
            }
            cout<<a[(k-1)%4].first<<" "<<a[(k-1)%4].second<<endl;
        }
    }
}