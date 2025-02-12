#include<stdio.h>

int main(){
    int N;
    int n;
    scanf("%d %d",&N,&n);
    int bitstatus = (N >> n) - 1;
    if(bitstatus & 1){
        printf("1";)
    }
    else{
        printf("0");
    }
    return 0;
}