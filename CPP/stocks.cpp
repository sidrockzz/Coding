#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a[n],max=0;
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n;j++){
            if(a[j]-a[i]>max)
            max=a[j]-a[i];
        }
    }
    cout<<max;
}