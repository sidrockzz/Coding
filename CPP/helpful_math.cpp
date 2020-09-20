#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int n = s.size()/2;
    int count=0;
    for(int i=n;i<s.size();i++){
        cout<<s[i];
        if(count<=n-1){
            cout<<"+";
            count++;
        }
    }
}