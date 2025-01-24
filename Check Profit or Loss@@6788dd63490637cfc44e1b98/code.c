#include <stdio.h>

int main() {
    int price[2];
    scanf("%d  %d",&price[0],&price[1]);
    if(price[0]>price[1]){
        printf("Loss");
    }
    else{
        printf("Profit");
    }
    return 0;
}