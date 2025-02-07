#include<stdio.h>

int isPrime(int n);

int isPrime(int n){
    if (n <= 1){
        return 0; // Not a prime number
    }
    for (int i = 2; i <= n/2; i++){
        if (n % i == 0){
            return 0; // Not a prime number
        }
    }
    return 1; // Prime number
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