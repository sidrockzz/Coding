//
// Created by siddharth on 02/07/20.
//

// Solve thw problem based on number of special characters. If the count is odd print first odd digits and next even digits (vice versa)

#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int i,c=0;
    cin>>s;
    //cout<<s;
    for(int i=0;i<s.length();i++){
        //prints the alphabets and number
        if(!((s[i]>='A' && s[i] <= 'Z')||(s[i]>='a' && s[i] <= 'z')||(s[i]>=48 && s[i]<=57)))
            c++;
    }
    if(c%2==0){
        for(i=0;i<s.length();i++){
            if(s[i]>=48 && s[i]<=57){
                if(s[i]%2==0)
                    cout<<s[i];
            }
        }
        for(i=0;i<s.length();i++) {
            if (s[i] >= 48 && s[i] <= 57) {
                if (s[i] % 2 != 0)
                    cout << s[i];
            }
        }
    }
    else{
        for(i=0;i<s.length();i++) {
            if (s[i] >= 48 && s[i] <= 57) {
                if (s[i] % 2 != 0)
                    cout << s[i];
            }
        }
        for(i=0;i<s.length();i++){
            if(s[i]>=48 && s[i]<=57){
                if(s[i]%2==0)
                    cout<<s[i];
            }
        }
    }
}