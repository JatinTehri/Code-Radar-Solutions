#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int arr[N] , freq[N];
    int count = 0;
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
        freq[i] = -1;
    }
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(arr[i]==arr[j]){
                count++;
                freq[i] = 0;
            }
            if(freq[i] != 0){
                freq[i] = count;
            }
        }
    }
    for(int i=0;i<N;i++){
        if(freq[i] != 0){
            printf("%d %d\n",arr[i],freq[i]);
        }
    }
    return 0;
}