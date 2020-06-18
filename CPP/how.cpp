//
// Created by siddharth on 18/06/20.
//
#include<bits/stdc++.h>
#include <vector>
#define M 1000000007
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define SQ(a) (a)*(a)
using namespace std;
typedef long long ll;
typedef vector<int>vi;
typedef pair<int,int>pi;

#include<stdio.h>
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while(scanf("%d",&n)==1){
        if(n/10==0){
            printf("1\n");
        }
        else if(n/100==0){
            printf("2\n");
        }
        else if(n/1000==0){
            printf("3\n");
        }
        else{
            printf("More than 3 digits\n");
        }
    }
    return 0;
}

