#include <stdio.h>
#include<string.h>

int vowel_counter(char str[]){
    int len = strlen(str);
    int count = 0;
    for(int i=0;i<len;i++){
        while(str[i] >= 97 && str[i] <= 122){
            if(str[i] == 97 || str[i] == 101 || str[i] == 105 || str[i] == 111 || str[i] == 117){
                count++;
        }else{
            count = 0;
        }
         break;
        }

        while(str[i] >= 65 && str[i] <= 90){
            if(str[i] == 65 || str[i] == 69 || str[i] == 73 || str[i] == 79 || str[i] == 85){
                count++;
        }else{
            count = 0;
        }
         break;
        }
    }
    return count;
}

int main() {
    char str[10];
    scanf("%s",str);
    vowel_counter(str);
    return 0;
}