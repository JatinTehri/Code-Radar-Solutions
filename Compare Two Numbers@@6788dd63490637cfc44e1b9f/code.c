#include <stdio.h>

int main() {
    int num[2];
    scanf("%d  %d",&num[0],&num[1]);
    if(num[0]==num[1]){
        printf("Equal");
    }
    else if(num[0]>num[1]){
        printf("First");
    }
    else{
        printf("Second");
    }
    return 0;
}