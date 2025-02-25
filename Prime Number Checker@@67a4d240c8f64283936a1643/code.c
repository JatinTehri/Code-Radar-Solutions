#include<stdio.h>

int isPrime(int n);

int isPrime(int n){
    int isprime = 1;
    if (n <= 1){
        isprime = 0; // Not a prime number
    }
    else{
    for (int i = 2; i < n; i++){
        if (n!=2 && n % i == 0){
            isprime = 0; // Not a prime number
            break;
        }
    }
    }
    if(isprime){
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