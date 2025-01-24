#include <stdio.h>

int main() {
    char n;
    scanf("%c",&n);
    if(n>=97 && n<=122){
        printf("Lowercase");
    }
    else{
        printf("Uppercase");
    }
    return 0;
}