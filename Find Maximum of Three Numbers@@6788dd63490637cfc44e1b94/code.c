#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d   %d   %d",&a,&b,&c);
    if(a>c && a>b){
        printf("%d",a);
    }
    else if(b>c && b>a){
        printf("%d",b);
    }
    else{
        printf("%d",c);
    }
    return 0;
}