#include <stdio.h>

int main() {
    int price[2];
    scanf("%d  %d",&price[0],&price[1]);
    if(price[0]>price[1]){
        printf("Loss");
    }
    else if(price[0]<price[1]){
        printf("Profit");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}