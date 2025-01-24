#include <stdio.h>

int main() {
    int num[3];
    for(int i=0;i<3;i++){
        scanf("%d   ",&num[i]);
    }
    printf("Average: %.2f",(num[0]+num[1]+num[2])/3.0);
    return 0;
}