#include<bits/stdc++.h>
using namespace std;

int main(){
    bool open = true;
    char c;
    while(1){
        c = cin.get();
        if(cin.eof()) break;
        if(c == '"'){
            if(open) cout<<"``";
            else cout<<"''";
            open = !open;
        }
        else cout<<c;
    }
}