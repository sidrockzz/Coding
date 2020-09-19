#include <stdio.h>
#include <string.h>

int top = -1;
char a[12];


void push(char c)
{
  top++;
  a[top]=c;
}

void pop()
{
  top--;
}


int main() {

  char s[13]; 
  int i;
  scanf("%s",s);//input will be provided by test cases
  
  // Write your code here
  int count=0;
  for(int i=0;s[i]!='\0';i++){
    if(s[i]=='(')
    push('(');
    else
    pop();
  }
    if(top==-1) //fill the condition here
    {
      printf("the braces are balenced");
    }
    else
    {
      printf("the braces are not balenced");
    }
}