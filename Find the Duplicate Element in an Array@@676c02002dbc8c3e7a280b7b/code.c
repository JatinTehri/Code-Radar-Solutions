#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d ",&arr[i]);
    }
    int repeated = arr[0];
    for(int i = 0;i<N;i++){
        for(int j = i+1;j<N;j++){
             if(arr[i] == arr[j]){
            repeated = arr[j];
           }
        }
      }
          
    if(repeated){
        printf("%d", repeated);
    } 
    
    return 0;
}