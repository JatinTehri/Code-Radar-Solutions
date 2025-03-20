#include<stdio.h>

int main(){
    char str[5];
    scanf("%s",str);
    char ch;
    scanf("%c",&ch);
    for(int i = 0;i<5;i++){
        if(str[i] == 65 || str[i] == 69 || str[i] == 73 || str[i] == 79 || str[i] == 85){
            str[i] = ch;
        }
        else if(str[i] == 97 || str[i] == 101 || str[i] == 105 || str[i] == 111 || str[i] == 117){
            str[i] = ch;
        }
    }
    for(int i=0;i<5;i++){
        printf("%c",str[i]);
    }
    return 0;
}