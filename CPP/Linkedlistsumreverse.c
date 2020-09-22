#include<stdio.h>
#include<stdlib.h>

struct node{
    int val;
    struct  node *next;
    
};
struct node *root1,*root2;
struct node* insert(struct node *root1,int val){
    struct node *temp,*p;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->val=val;
    temp->next=NULL;
    //printf("%p\t",temp);
   // printf("Inside insert");
   // printf("%p\t",root1);
    if(root1==NULL){
        root1=temp;
        //printf("%p",root1);
    }else{
        temp->next=root1;
        root1=temp;
    }
    return root1;
}
int display(struct node *root){
    struct node *temp;
    temp=root;
    int res=0;
    while(temp!=NULL){
        res=res*10+temp->val;
        temp=temp->next;
    }
    return res;
}


int main(){
    int size,val,i;
    //printf("Enter size of an list\n");
    scanf("%d",&size);
    //printf("Enter list elements\n");
    for(i=0;i<size;i++){
        scanf("%d",&val);
        root1=insert(root1,val);
    }
  
   // printf("\nList 2\n");
    //printf("Enter elements of list2\n");
        for(i=0;i<size;i++){
        scanf("%d",&val);
        root2=insert(root2,val);
    }
    printf("%d",(display(root1)+display(root2)));
    return 0;
    }