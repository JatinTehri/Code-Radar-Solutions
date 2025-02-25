#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int arr[N];

    for(int i = 0;i<N;i++){
        scanf("%d ",&arr[i]);
    }
    int no_of_one = 0;
    int no_of_two = 0;
    int no_of_three = 0;
    for(int i = 0;i<N;i++){
        if(arr[i] == 1){
            no_of_one += 1;
        }
        else if(arr[i] == 2){
            no_of_two += 1;
        }
        else{
            no_of_three += 1;
        }
    }
    for(int i = 0;i<N;i++){
        printf("%d %d\n",arr[i],no_of_one);

    }

    return 0;
}