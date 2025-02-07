#include<stdio.h>

int isPrime(int n);

int isPrime(int n){
    int not_prime;
    if(n == 1 || n == 2){
        not_prime = 1;
    }
    else if(n!=2){
        for(int i = 2;i<n;i++){
            if(n%i == 0){
                not_prime = 1;
            }
            else{
                not_prime = 0;
            }
        }

    }
    if(!(not_prime)){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
    }
    return 0;
}