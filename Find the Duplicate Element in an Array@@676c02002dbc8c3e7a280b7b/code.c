#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d ",&arr[i]);
    }
    int repeated = arr[0];
    int is_repeated = 0;
    for(int i = 0;i<N;i++){
        for(int j = i+1;j<N;j++){
             if(arr[i] == arr[j]){
            repeated = arr[j];
            is_repeated = 1;
            
           }
           else{
            is_repeated = 0;
           }
        }
      }
          
    if(repeated){
        printf("%d", repeated);
    } 
    
    return 0;
}