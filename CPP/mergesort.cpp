#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void merge( int a[], int temp[],int low,int high,int mid){
    int i, j, k;
    i = low;
    j = mid;
    k = low;
    while ((i <= mid - 1) && (j <= high)) {
        if (a[i] <= a[j]) {
            temp[k++] = a[i++];
        }
        else {
            temp[k++] = a[j++];
        }
    }
    while (i <= mid - 1)
        temp[k++] = a[i++];

    while (j <= high)
        temp[k++] = a[j++];

    for (i = low; i <= high; i++)
        a[i] = temp[i];

}
void mergesort( int a[], int temp[],int low,int high){
    int mid;
    if(low<high){
        mid = (low+high)/2;
        mergesort(a,temp, low, mid);
        mergesort(a,temp, mid+1, high);
        merge(a,temp, low, high, mid+1);
    }
}

int main(){
    ll n;
    cin>>n;
    int a[n],temp[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
        temp[i]=a[i];
    mergesort(a,temp, 0, n-1);
    for(ll i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}