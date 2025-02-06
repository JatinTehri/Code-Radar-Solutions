#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[100];
    gets(str);
    // gets(str[1]);
    // printf("%s%s",str[0],str[1]);
    puts(str);
    return 0;
}