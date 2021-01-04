#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a1,n,k;
        int sum1=0,sum2=0;
        cin>>n>>k;
        vector<int> a,b;
        for(int i=0;i<n;i++){
            cin>>a1;
            a.push_back(a1);
        }
        for(int i=0;i<k;i++){
            cin>>a1;
            b.push_back(a1);
        }
        sum1 = accumulate(a.begin(), a.end(), sum1);
        sum2 = accumulate(b.begin(), b.end(), sum2);
        if(sum1>sum2){
            cout<<0<<endl;
            continue;
        }
            sort(a.begin(),a.end());
            sort(b.begin(),b.end());
            int count =0;
            int j = k-1;
            for(int i=0;i<n;i++){
                sum1 = sum1 - a[i];
                sum2 = sum2 - b[j];
                sum1 = sum1 + b[j];
                sum2 = sum2 + a[i];
                count++;
                j--;
                if(sum1>sum2 || j<0){
                    break;
                }
            }
            if(sum1>sum2){
                cout<<count<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }

	// your code goes here
	return 0;
}
