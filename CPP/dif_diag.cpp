#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
        int m;
        cin>>m;
        int a[m][m],sum1=0,sum2=0;
        for(int i=0;i<m;i++)
        for(int j=0;j<m;j++)
        cin>>a[i][j];
        for(int i=0;i<m;i++){
            sum1+=a[i][i];
            sum2+=a[i][m-1-i];
        }
        cout<<abs(sum1-sum2)<<"\n";
}