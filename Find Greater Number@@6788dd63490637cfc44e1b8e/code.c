#include <stdio.h>

int main() {
    int num[2];
    scanf("%d  %d",&num[0],&num[1]);
    if(num[0]>num[1]){
        printf("%d",num[0]);
    }
    else if(num[1]>num[0]){
        printf("%d",num[1]);
    }
    return 0;
}