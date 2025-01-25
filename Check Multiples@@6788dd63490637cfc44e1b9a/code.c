#include <stdio.h>

int main() {
    int num[2];
    scanf("%d  %d",&num[0],&num[1]);
    if(num[0]%num[1]==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}