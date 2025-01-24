#include <stdio.h>

int main() {
    char ch;
    scanf("%c",&ch);
    while(ch>=97 && ch<=122){
        if(ch==97 || ch==101 || ch==105 || ch==111 || ch==117){
            printf("Vowel\n");
        }
        else{
            printf("Consonant\n");
        }
        break;
    }
    while(ch>=65 && ch<=90){
        if(ch==65 || ch==69 || ch==73 || ch==79 || ch==85){
            printf("Vowel\n");
        }
        else{
            printf("Consonant\n");
        }
        break;
    }
    return 0;
}