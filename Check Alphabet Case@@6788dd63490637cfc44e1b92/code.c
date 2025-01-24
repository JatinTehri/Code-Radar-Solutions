#include <stdio.h>

int main() {
    char n;
    scanf("%c",&n);
    if(n>=97 && n<=122){
        printf("Lowercase");
    }
    if(n>=65 && n<=90){
        printf("Uppercase");
    }
    else{
        printf("Not an alphabet")
    }
    return 0;
}