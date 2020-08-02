//
// Created by siddharth on 06/07/20.
//
#include<bits/stdc++.h>

using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int count1=0,count2=0;
        while (n--) {
            int a, b, sum1 = 0, sum2 = 0, m1,m2;
            cin >> a >> b;
            while (a > 0) {
                m1 = a % 10;
                sum1 = sum1 + m1;
                a = a / 10;
            }
            while (b > 0) {
                m2 = b % 10;
                sum2 = sum2 + m2;
                b = b / 10;
            }
            if (sum1 > sum2)
                count1++;
            else if(sum1==sum2){
                count1++;
                count2++;
            }
            else
                count2++;
        }
        if(count1>count2)
        cout << 0 << " " << count1 << "\n";
        else if(count1 < count2)
            cout<<1<<" "<<count2<<"\n";
        else
            cout<<2<<" "<<count1<<"\n";
    }
}
