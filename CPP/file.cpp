#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    unsigned int n,k,max=INT_MIN;
    cin>>n;
    unsigned int a[n];
    for(unsigned int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    cin>>k;
    while(k--){
        unsigned int c;
        cin>>c;
        unsigned int low=0,high=n-1;
        unsigned int m = (low +high) / 2;
        while(low<=high){
            if (a[m]<=c){
                max = a[m];
                low=m+1;
            }
            else if(c > a[m])
                high= m - 1;
            else
                low = m+1;
        }
        cout<<max<<endl;
    }
    return 0;
}
