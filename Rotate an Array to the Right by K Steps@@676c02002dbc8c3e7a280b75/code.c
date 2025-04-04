#include<stdio.h>

void reverse(int arr[],int a,int b){
    for(int i=a,j=b;i<j;i++,j--){
        arr[i] = arr[j-i];
    }
    return;
}
int main(){
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}