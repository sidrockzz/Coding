#include <stdio.h>
int remove_duplicate(int a[],int n){
  //Write your code here and print array elements in the function only
  for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
          if(a[i]==a[j]){
              for(int k=j;k<n;k++){
                  a[k] = a[k+1];
              }
              n--;
              j--;
          }
      }
  }
  
}
int main(void) 
{
  int a[10],i;
  for(i=0;i<10;i++)
  {
    scanf("%d",&a[i]);
  }
  remove_duplicate(a,10);
  
 
  return 0;
}