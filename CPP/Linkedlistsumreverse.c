#include <stdio.h>
#include <stdlib.h>

struct node{
  int element;
  struct node* next;
};

int solve(struct node* root, int size){
  //write your code here
    struct node* newnode;
    newnode = root;
    int sum =0;
    while(newnode!=NULL || sum!=0){
        if(newnode!=NULL){
            sum+= newnode->element;
            newnode=newnode->next;
        }
}
return sum;
}

void insert(struct node* root,int ele){
    struct node* traverse;
    struct node* newnode;
    traverse = root;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->element = ele;
    newnode->next = NULL;
    while(traverse->next != NULL){
        traverse=traverse->next;
    }
    traverse->next = newnode;
}

struct node* makeLL(int *arr, int size){
    struct node* root;
    root = (struct node*)malloc(sizeof(struct node));
    root->element = arr[0];
    root->next = NULL;
    for(int i=1;i<size;i++){
        insert(root,arr[i]);
    }
    return root;
}

int main(){
 int N;
 int *p1, *p2;
 scanf("%d",&N);
 p1 = (int*)malloc(N*sizeof(int));
 p2 = (int*)malloc(N*sizeof(int));

 for(int i=0;i<N;i++){
     scanf("%d",&p1[i]);
 }  

 for(int i=0;i<N;i++){
     scanf("%d",&p2[i]);
 }  

struct node* root=NULL;
struct node* root1=NULL;
 root=makeLL(p1,N);
 root1=makeLL(p2,N);

 printf("%d\n",solve(root,N)+solve(root1,N));

 return 0;
}
