#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int clone[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        clone[i] = arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(clone[i]>clone[j]){
                int temp = clone[i];
                clone[i] = clone[j];
                clone[j] = temp; 
            }
        }
    }
    // int sorted = 1;
    for(int i=0;i<n;i++){
        int sorted = 0;
        if(arr[i] == clone[i]){
            sorted =1;
        }
     if(sorted){
        printf("Sorted");
        break;
     }
     else{
        printf("Not Sorted");
        break;
     }
    }
    return 0;
}