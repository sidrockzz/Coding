#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    int n=0;
    while(t--){
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(s[i]=='+'){
            n++;
            break;
            }
            else if(s[i]=='-'){
            n--;
            break;
            }
        }
    }
    cout<<n;
}