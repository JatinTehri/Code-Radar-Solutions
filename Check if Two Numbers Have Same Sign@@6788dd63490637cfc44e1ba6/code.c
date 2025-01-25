#include <stdio.h>

int main() {
    int num[2];
    scanf("%d  %d",&num[0],&num[1]);
    if(num[0]>0 && num[1]>0){
        printf("Same Sign");
    }
    else if(num[0]<0 && num[1]<0){
        printf("Same Sign");
    }
    else{
        printf("Different Sign");
    }
    return 0;
}