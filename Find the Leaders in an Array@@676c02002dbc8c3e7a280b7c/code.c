#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d ",&arr[i]);
    }
    int highest_element = arr[0];
    for(int i = 1;i<N;i++){
        if(highest_element >= arr[i] ){
            highest_element = arr[i];
        }
    }
    printf("%d %d %d",highest_element,arr[N-2],arr[N-1]);
    return 0;
}