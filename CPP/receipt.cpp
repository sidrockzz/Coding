//
// Created by siddharth on 16/06/20.
//
#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main(){
    int T,item;
    long int p;
    cin>>T;
    while(T--)
    {
        item=0;
        scanf("%ld",&p);
        if(p>2048)
        {
            item+=p/2048;
            p=p%2048;
        }
        while(p)
        {
            if(p%2)
                item++;
            p=p/2;
        }
        cout<<item;
    }
}

