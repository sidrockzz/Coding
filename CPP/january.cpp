#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        string s="",res="";
        for(int i=0;i<n;i=i+4){
            if((i+4)==n){
                s = str.substr(i);
            }
            else{
                s = str.substr(i,i+4);
            }
            int start =0,mid=0;
            string a = "abcdefghijklmnop";
            int end = a.length();
            string b="";
            for(int j =0;j<s.length();j++){
                if(s.at(j)=='0'){
                    mid =(start+end)/2;
                    b = a.substr(start,mid);
                    end=mid;
                }
                else{
                    mid = (start+end)/2;
                    if(end==16)
                    b = a.substr(mid);
                    else
                    {
                        b = a.substr(mid,end);
                    }
                    start = mid;
                }
            }
            res = res + b;
        }
        cout<<res<<endl;
    }
}