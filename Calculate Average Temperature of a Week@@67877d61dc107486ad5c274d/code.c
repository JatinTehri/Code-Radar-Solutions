#include<stdio.h>

struct Day{
    char day_name[10];
    int temp;
};

int main(){ 
    struct Day D[7];
    int sum = 0;
    for(int i = 0;i<7;i++){
         scanf("%9s %d",D[i].day_name,&D[i].temp);
    }
    for(int i = 0;i<7;i++){
         sum += D[i].temp;
    }
    printf("Average Temperature: %.2f",(float)(sum/7));
    return 0;
}