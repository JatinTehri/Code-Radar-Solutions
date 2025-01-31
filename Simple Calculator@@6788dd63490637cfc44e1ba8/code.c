#include <stdio.h>

int main() {
    char op;
    int num[2];
    scanf("%d %d %1c",&num[0] ,&num[1] ,&op);
    if(op == '+'){
        printf("%d",num[0] + num[1]);
    }
    else if(op == '-'){
        printf("%d",num[0] - num[1]);
    }
    else if(op == '/'){
        printf("%d",num[0] / num[1]);
    }
    else if(op == '*'){
        printf("%d",num[0] * num[1]);
    }
    else{
        printf("error");
    }
    return 0;
}