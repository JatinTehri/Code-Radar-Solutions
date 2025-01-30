#include <stdio.h>
#include<string.h>

int main() {
    char str[100];
    scanf("%s",str);
    int count = 0;
    while(str[i]>=33 && str[i]<=127){
        count++;
        break;
    }
    printf("%d",count);
    return 0;
}