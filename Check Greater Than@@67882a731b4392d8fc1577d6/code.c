#include <stdio.h>

int main() {
    int num[2];
    scanf("%n  %n",&num[0],&num[1]);
    if(num[0]>num[1]){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}