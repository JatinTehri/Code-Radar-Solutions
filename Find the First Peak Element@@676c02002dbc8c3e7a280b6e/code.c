#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int high_index = 0;
    int high_element = arr[0];
    for(int i=1;i<N;i++){
        if(high_element < arr[i]){
            high_element = arr[i];
            high_index = i;
        }
    }
    printf("%d",high_element);

    return 0;
}