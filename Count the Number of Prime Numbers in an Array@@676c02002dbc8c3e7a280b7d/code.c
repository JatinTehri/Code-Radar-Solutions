#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d ",&arr[i]);
    }
    int count_not_prime = 0;
    for(int i=0;i<N;i++){
        if(arr[i] <= 1){
            count_not_prime += 1;
        }
        else{
            for(int i = 2;i<N;i++){
                if(arr[i] != 2 && arr[i] % i == 0){
                    count_not_prime += 1;
                }
            }
        }
    }
    int no_of_prime = N - count_not_prime;
    printf("%d",no_of_prime);
    return 0;
}