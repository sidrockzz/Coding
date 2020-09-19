#include<bits/stdc++.h>

using namespace std;

int main(){
    string s,s2;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    //cout<<s<<"\n";
    for(int i=0;i<s.length();i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'){
        continue;
        }
        else{
        s2+='.';
        s2+=s[i];
        }
    } 
    cout<<s2;
}