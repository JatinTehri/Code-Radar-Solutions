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
        // printf("\n");
    }
    else{
        return 0;
        // printf("\n");
    }
}

