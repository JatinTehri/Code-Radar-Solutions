#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int is_prime;

    if(n<=0 || n==1){
        printf("Not Prime");
    }
    else{
        
        for(int i=2;i<n;i++){ 
            if(n%i==0){
                printf("Not Prime");
                is_prime = 0;
                break;
        }
        else{
            is_prime =  1;
        }
    }
    }
    if(is_prime){
        printf("Prime");
    }
    return 0;
}