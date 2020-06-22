#include<bits/stdc++.h>
using namespace std;
int power(int a,int b){
    int res=1;
    for(int i=0;i<b;i++)
        res*=a;
    return res;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum=0,count=0;
        cin>>n;
        for(int i=0;n/power(2,i)>0;i++){
            count++;
        }
        cout<<count<<"\n";
    }
    return 0;
}
