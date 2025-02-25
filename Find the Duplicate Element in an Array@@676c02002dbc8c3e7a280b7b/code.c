#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d ",&arr[i]);
    }
    int repeated = -1;
    for(int i = 1;i<N;i++){
        for(int j = i+1;j<N;j++){
             if(repeated == arr[i]){
            repeated = arr[i];
            break;
           }
          
        }
        if(repeated != -1){
            break;
        }
      }
          
    if(repeated != -1){
        printf("%d\n", repeated);
    } 
    
    return 0;
}