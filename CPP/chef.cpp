#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t,n,k,d;
    cin>>t;
    while(t--){
        cin>>n>>k>>d;
        long long sum=0,sum1=0,count=0;
        vector <int>a;
        int f;
        for(int i=0;i<n;i++){
            cin>>f;
            a.push_back(f);
        }
        sum = accumulate(a.begin(), a.end(), sum);
        if(sum/k<d){
            cout<<sum/k<<endl;
        }
        else if(sum<k){
            cout<<0<<endl;
        }
        else{
            cout<<d<<endl;
        }
    }
	// your code goes here
	return 0;
}
