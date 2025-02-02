#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(n == 1){
                printf("*");
            }
            else{
                if(i==0){
                    printf(" *");
                }
                else{
                    printf("*");
                }
            }
        }
    }
    return 0;
}