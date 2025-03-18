#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin); // Use fgets() instead of gets()
    
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) { // Iterate through the string until '\0'
        if (str[i] != '\n') { // Exclude the newline character added by fgets()
            count++;
        }
    }
    
    printf("%d\n", count);
    return 0;
}
