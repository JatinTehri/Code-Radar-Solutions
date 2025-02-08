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
// Important note: Most Significant Bit of positive number is always 0 (in 2s complement) and negative number is 1.