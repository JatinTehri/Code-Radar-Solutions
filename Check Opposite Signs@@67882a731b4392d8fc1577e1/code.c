#include <stdio.h>

int main() {
   int num[2];
   scanf("%d  %d",&num[0],&num[1]);
   if(num[0]>0 && num[1]<0){
    printf("True");
   }
   else if(num[0]<0 && num[1]>0){
    printf("True");
   }
   else{
    printf("False");
   }
    return 0;
}