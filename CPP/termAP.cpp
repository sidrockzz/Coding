#include<bits/stdc++.h>

using namespace std;

int main(){
    //0,0,7,6,14,12,21,18
    int n,sum=0,a=0,b=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2!=0)
        a=a+7;
        else
        {
            b=b+6;
        }
    }
    if(n%2!=0){
        cout<<n<<" "<<a-7;
    }
    else{
        cout<<n<<" "<<b-6;
    }
}