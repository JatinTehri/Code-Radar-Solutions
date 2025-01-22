#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for (int j=0;j = i;j++){
            printf("* ");
        }
    printf("\n");
    }
    return 0;
}
// i=0,*   2n-2i
// i=1,* *    
// i=2, ***