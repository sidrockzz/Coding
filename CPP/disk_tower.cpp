#include<bits/stdc++.h>

using namespace std;

int main(){
    long long N, temp[1000002] = {0};
    scanf("%lld", &N);
    long long min = N, t_size = N;
    long long z;
    for (long long i = 0; i < N; i++){
        scanf("%lld", &z);
        temp[z] = z; 
        if(z == min){
            while(temp[t_size]){
                printf("%lld ", t_size);
                t_size--;
            }
            min = t_size;
            printf("\n");
        }
        else{
            printf("\n");
        }
    }
}