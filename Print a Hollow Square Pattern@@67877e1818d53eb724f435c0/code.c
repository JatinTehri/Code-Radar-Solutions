#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n%2 == 0){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("*");
        }
        printf("\n");
    }
    }
    else{
        for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==1 || j==n){
                printf("*");
            }
            else{
                if(j==1 || j==n){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    }
    return 0;
}