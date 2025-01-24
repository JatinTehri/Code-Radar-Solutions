#include <stdio.h>

int main() {
    char n;
    scanf("%c",&n);
    if(n>=97 && n<=122){
        printf("Lowercase");
        break;
    }
    else{
        printf("Uppercase");
    }
    return 0;
}