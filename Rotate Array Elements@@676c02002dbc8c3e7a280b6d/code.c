#include<stdio.h>

void reverse(int arr[],int a,int b){
    for(int i=a,j=b;i<j;i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}

int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    k = k%N;
    reverse(arr,0,N-1);
    reverse(arr,0,k-1);
    reverse(arr,k,N-1);
    for(int i=0;i<N;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}