#include <iostream>

using namespace std;
unsigned long long power(unsigned long long x,unsigned long long  n){
    if(n==0)
    return 1;
    unsigned long long temp = power(x,n/2);
    if(n%2==0)
    return temp*temp;
    else
    return x*temp*temp;
}
int main()
{
    unsigned long long x,n;
    cin>>x>>n;
    cout<<power(x,n);

    return 0;
}
