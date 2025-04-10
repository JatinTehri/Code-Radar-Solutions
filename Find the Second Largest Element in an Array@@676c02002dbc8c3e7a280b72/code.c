#include<stdio.h>
#include<limits.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i] != max && smax<arr[i]){
            smax = arr[i];
        }
    }
    if(smax == INT_MIN){
        printf("-1"); // No valid second maximum
    } else {
        printf("%d", smax);
    }

    return 0;
}