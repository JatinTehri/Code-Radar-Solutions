#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int nsp = n-1;     // no. of spaces
    int nst = 1;            // no. of stars
    // int ml = n/2 + 1;        // middle line
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        for(int j=1;j<=nst;j++){
            printf("*");
        } 
            nsp--;
            nst+=2;
        printf("\n");
    }
    int nsp2 = 1;
    int nst2 = n;
    for(int i=1;i<=n-1;i++){
         for(int j=1;j<=nsp2;j++){
            printf(" ");
         }
         for(int j=1;j<=nst2;j++){
            printf("*");
         }
         nsp2++;
         nst2-=2;
    }
    return 0;
}