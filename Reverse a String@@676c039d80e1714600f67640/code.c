#include <stdio.h>
#include<string.h>

char rev_str(char str[]){
    for(int i=0;i<strlen(str);i++){
        for(int i=0;i<(strlen(str)/2);i++){
            str[i] = str[strlen(str)-i-1];
        }
    }
    return str;
}

int main() {
    char str[100];
    scanf("%s",str);
    printf("%s",rev_str(str));

    return 0;
}