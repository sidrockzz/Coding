#include<bits/stdc++.h>

using namespace std;

long long sumDigits(long long n){
    return n == 0 ? 0 : n%10 + sumDigits(n/10);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin>>n;
    cout<<sumDigits(n)<<"\n";
}