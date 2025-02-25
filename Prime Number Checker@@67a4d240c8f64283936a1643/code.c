#include<stdio.h>

int isPrime(int n);

int isPrime(int n){
    int isprime = 1;
    if (n <= 1){
        isprime = 0; // Not a prime number
    }
    else{
        for (int i = 2; i < n; i++){
            if ( n!= 2 && n % i == 0){
                isprime = 0; // Not a prime number
                break; // Exit loop once a divisor is found
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
    int results[t];
    for(int i = 0; i < t; i++){
        int num;
        scanf("%d",&num);
        results[i] = isPrime(num);
    }
    for(int i = 0; i < t; i++){
        printf("%d\n", results[i]);
    }
    return 0;
}
