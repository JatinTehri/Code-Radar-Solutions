#include <stdio.h>


int main() {
    unsigned int n;
    scanf("%u",&n);
    int bits = sizeof(unsigned int) * 8;
    unsigned msb = 1 << (bits-1);
    if(n & msb){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}