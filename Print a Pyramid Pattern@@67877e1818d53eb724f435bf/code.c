#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        for(int j=0;j<(n*n);j++){
            if(n>1){
                if(i==0){
                printf(" *");
            }
            else{
                printf("*");
            }
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
    
    return 0;
}

//n=2
// for i = 0 , * 
// for i=  1,    ***