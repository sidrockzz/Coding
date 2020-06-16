//
// Created by siddharth on 16/06/20.
//
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l1,l2,i,cnt=0,j;
    char s1[105],s2[105];
    scanf("%s%s",s1,s2);
    l1=strlen(s1);
    l2=strlen(s2);
    for(i=0,j=l2-1; i<l1,j>=0; i++,j--){
        if(s1[i]==s2[j]){
            cnt++;
        }
    }
    if(cnt==l1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
