#include<bits/stdc++.h>

using namespace std;

int main(){
    char s[12][12];
    for(int i=0;i<2;i++){
        scanf("%s",s[i]);
    }
    char s1[12];
    scanf("%s",s1);
    printf("%s %s",s[0],s1);
    for(int i=0;i<12;i++){
        if(s[1][i]==s1[i]){
            cout<<true;
        }
    }
}