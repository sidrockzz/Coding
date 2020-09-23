#include<bits/stdc++.h>

using namespace std;

int main(){
    int i,j,temp,n;
    int in[100];
    int p[100];
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>in[i];
    sort(in,in+n);
    for(i=n-1;i>=0;i--){
        int x=0;
        x=(n-i)*in[i];
        p[i]=x;
        }
        for(i=n-1;i>=0;i--)
        {
            if(p[n-1]<p[i]){
                p[n-1]=p[i];
                }
                }
                printf("%d",p[n-1]);
}
