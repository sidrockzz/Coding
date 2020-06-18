//
// Created by siddharth on 18/06/20.
//
//Maximum sub array

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int best = 0,sum = 0;
    for (int k = 0; k < n; k++) {
                sum =max(array[k],sum+array[k]);
                best = max(best,sum);
            }
    cout << best << "\n";
}
//O(n) algo