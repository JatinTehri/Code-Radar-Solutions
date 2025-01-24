#include <stdio.h>

int main() {
    int num[3];
    for(int i=0;i<3;i++){
        scanf("%d   ",&num[i]);
    }
    for(int i=0;i<3;i++){
        printf("%d   ",num[i]);
    }
    return 0;
}