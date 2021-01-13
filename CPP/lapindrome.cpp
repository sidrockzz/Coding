#include <bits/stdc++.h>
using namespace std;

bool lapindrome(string s){
    int left[26]={0};
    int right[26]={0};
    for(int i=0;i<s.size()/2;i++){
        left[s[i]-'a']+=1;
    }
    int n;
    if(s.size()%2==0) n = s.size()/2;
    else n = s.size()/2+1;
    for(int i=s.size()-1;i>=n;i--){
        right[s[i]-'a']+=1;
    }
    for(int i=0;i<26;i++){
        if(left[i]!=right[i])
        return false;
    }
    return true;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(lapindrome(s))
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
    }
	// your code goes here
	return 0;
}