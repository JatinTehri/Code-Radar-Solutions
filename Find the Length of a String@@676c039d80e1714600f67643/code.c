#include<stdio.h>

int main(){
    char str[10];
    scanf("%s",str);
    int count = 0;
    for(int i=0;i<10;i++){
        if(str[i] == '\0'){
            break;
        }
        else{
            count++;
            break;
        }
        printf("%d",count);
    }
    return 0;
}