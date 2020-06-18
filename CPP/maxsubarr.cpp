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
    int best = 0;
    for (int a = 0; a < n; a++) {
            int sum = 0;
            for (int b = a; b < n; b++) {
                sum += array[b];
                best = max(best,sum);
            }
        }
    cout << best << "\n";
}
//O(n^2) algo