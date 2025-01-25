#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    if(n==1){
        printf("Not Prime");
    }
    else{
        int is_prime = 1;
        for(int i=2;i<n;i++){
            if(n%i==0){
            printf("Not Prime");
            is_prime = 0;
            break;
        }
    }
    }

    if(is_prime){
        printf("Prime");
    }
    return 0;
}