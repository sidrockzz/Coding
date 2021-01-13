#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,input;
    cin>>n;
    vector<long long> b;
    for(long long i=0;i<n;i++){
        cin>>input;
        b.push_back(input);
    }
    sort(b.begin(),b.end());
    long long max = -1;
    for(long long i=0;i<n;i++){
        if(b[i]*(n-i)>max) max = b[i]*(n-i);
    }
    cout<<max<<'\n';
	// your code goes here
	return 0;
}
