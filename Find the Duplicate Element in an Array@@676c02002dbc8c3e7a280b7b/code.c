#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d ",&arr[i]);
    }
    int repeated = arr[0];
    for(int i=1;i<N;i++){
        if(repeated == arr[i]){
            repeated = arr[i];
        }
        break;
    }
    printf("%d",repeated);
    return 0;
}