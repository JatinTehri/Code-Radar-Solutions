#include <stdio.h>

int even = 0;
 int odd = 0;
int is_even(int arr[],int n){
    
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    return even;
}
int is_odd(int arr[],int n){
    return odd;
}
int main() {
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=-;i<N;i++){
        scanf("%d ",&arr[i]);
    }
    printf("%d %d",is_even(arr,N),is_odd(arr,N));
    return 0;
}