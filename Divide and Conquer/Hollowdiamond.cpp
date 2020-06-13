#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,rows;
    printf("Enter the number of rows: \n");
    scanf("%d",&rows);//get input from user
//print upper triangle
    for(i=1; i<=rows; i++){
        for(j=rows; j>i; j--){
            printf(" ");//print space
        }
        printf("*");//print star
        for(j=1; j<(i-1)*2; j++){
            printf(" ");
        }
        if(i==1){
            printf("\n");//move to next line
        }
        else{
            printf("*\n");
        }
    }
//print lower triangle
    for(i=rows-1; i>=1; i--){
        for(j=rows; j>i; j--){
            printf(" ");//print space
        }
        printf("*");
        for(j=1; j<(i-1)*2; j++){
            printf(" ");
        }
        if(i==1){
            printf("\n");//move to next line
        }
        else{
            printf("*\n");
        }
    }
    return 0;
}