#include <stdio.h>
#include<string.h>

int main() {
    char str[100];
    gets(str);
    int count = 0;
    for(int i = 0;i<100;i++){
        while(str[i] != '\0'){
            count++;
            break;
        }
    }
    printf("%d",count);
    return 0;
}