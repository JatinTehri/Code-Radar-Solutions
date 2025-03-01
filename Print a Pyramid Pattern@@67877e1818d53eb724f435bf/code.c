#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(n>1){
                if(i==1){
                    if(j==n/2+1){
                        printf("*");
                    }
                    else{
                        printf(" ");
                    }
                // printf(" *");
            }
            else{
                printf("*");
            }
            }
        }
        printf("\n");
    }
    
    return 0;
}

//n=2
// for i = 0 , * 
// for i=  1,    ***