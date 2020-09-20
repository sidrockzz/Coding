#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* reverseString(char input[]){
    char *revString;
    int len,j=0;
    len=strlen(input);
    revString = (char*)malloc((len+1)*sizeof(char));
    char b[30];
    for(int i=len-1;i>=0;i--)
    b[j++]=input[i];
    revString=b;
    return revString;
}
int main(){
    char input[1000];
    scanf("%s",input);
    printf("%s",reverseString(input));
    return 0;
}