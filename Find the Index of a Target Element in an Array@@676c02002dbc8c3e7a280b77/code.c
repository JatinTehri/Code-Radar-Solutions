#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int arr[N];

    for(int i = 0;i<N;i++){
        scanf("%d ",&arr[i]);
    }
    
    int req_number;
    scanf("%d",&req_number);

    for(int i = 0;i<N;i++){
        if(req_number == arr[i]){
            printf("%d",i);
        }
    }
    return 0;
}