#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d ",&arr[i]);
    }
    int highest_element;
    for(int i = 0;i<N;i++){
        if(arr[i] >= arr[i+1] ){
             highest_element = arr[i];
        }
    }
    printf("%d %d %d",highest_element,arr[N-2],arr[N-1]);
    return 0;
}