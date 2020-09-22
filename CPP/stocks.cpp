#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,max_value=0,profit=0;
    cin>>n;
    int a[n],max=0;
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++){
        if(a[i]>max_value)
        max_value=a[i];
    }
    for(int i=0;i<n;i++){
        if(max_value-a[i]>profit)
        profit = max_value-a[i];
    }
    cout<<max_value<<" "<<profit;
}