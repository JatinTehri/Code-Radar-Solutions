#include <stdio.h>

int main() {
    int num[2];
    scanf("%d  %d",&num[0],&num[1]);
    if(num[0]>=18 && num[1]==1){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}