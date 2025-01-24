#include <stdio.h>

int main() {
    char c;
    scanf("%c",&c);
    for(c>=97 && c<=122){
        if(c==97 || c==101 || c==105 || c==111 ||c==117){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    for(c>=65 && c<=90){
        if(c==65 || c==69 || c==75 || c==81 ||c==85){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    return 0;
}