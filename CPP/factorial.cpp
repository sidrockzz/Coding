#include<iostream>

using namespace std;
//Create max array which can hold big result of factoriaal
#define MAX 500
int result[MAX];

//digit count in result array
int result_size;

void multiply(int x){
    //In multiplu method multiply this "x" numbr to result[i] and update the result in reverse order
    int carry = 0;
    for(int i=0;i<result_size;i++){
        int prod = result[i] * x+carry;
        result[i] = prod %10; // To store reverse order
        carry = prod/10;
    }
    while(carry){
        result[result_size]=carry%10;
        carry = carry / 10;
        result_size++;
    }
}


void factorial(int n){
    //initialize result[0]=1 and number of digit=1
    result[0]=1;
    result_size=1;

    //now multiply digit one by one
    for(int i =2;i<=n;i++)
        multiply(i);
    //print the result arra in reverse order for answer
    for(int i=result_size-1;i>=0;i--){
        cout<<result[i];
    }
    cout<<endl;

}

int main(){
    int n = 100;
    factorial(n);
}
