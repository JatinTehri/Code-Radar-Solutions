#include<stdio.h>

int main() {
    char op;
    int num[2];
    
    scanf("%d %d %c",&num[0] ,&num[1] ,&op);
    if(op == '+'){
        printf("%d",(num[0] + num[1]));
    }
    else if(op == '-'){
        printf("%d",(num[0] - num[1]));
    }
    else if(op == '/'){
        if(num[1]==0){
            printf("error");
        }else{
           printf("%d",(num[0] / num[1]));
        }
    }
    else if(op == '*'){
        printf("%d",(num[0] * num[1]));
    }
    
    return 0;
}