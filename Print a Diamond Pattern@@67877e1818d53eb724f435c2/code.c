#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
    int nsp = 1;
    for (int i = n - 1; i >= 1; i--) {
        // Print spaces
        // for (int j = n; j > i; j--) {
        //     printf(" ");
        // }
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        nsp++;
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}