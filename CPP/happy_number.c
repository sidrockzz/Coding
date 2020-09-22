#include <stdio.h>

int isHappyNumber(int num){  
    int check=100;
    long long m = num;
    if(num==1)return 1;
    while(check--){
      long long ans=0;
      while(m>0){
        int res=m%10;
        ans+=res*res;
        m/=10;
      }
      if(ans==1)
      return 1;
      m=ans;
    }
    return 0;
    //write your code here 
}  
      
int main()  
{  
  int n;
    scanf("%d",&n);
     
    int result=isHappyNumber(n);
    if(result==1)
    printf("True\n");
    else
    printf("False\n");
    return 0;
  
}
