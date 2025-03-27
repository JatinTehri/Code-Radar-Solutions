#include<stdio.h>

void is_sorted(int arr[],int n){
    int cpy[n];
    for(int k=0;k<n;k++){
        cpy[k] = arr[k];
    }
    for(int i=1;i<=n-1;i++){
        for(int j=0;j<n;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    if(cpy[] == arr[]){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
    return;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
     is_sorted(arr,n);

    return 0;
}