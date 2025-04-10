#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int repeated = 0,count;
    for(int i=0;i<n;i++){
        count = 1;
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                repeated = arr[i];
                count++;
            }
        }
        if(count>n/2){
            printf("%d",repeated);
        }
        
    }
    return 0;
}