#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[2];
    gets(str[0]);
    gets(str[1]);
    printf("%s%s",str[0],str[1]);
    return 0;
}