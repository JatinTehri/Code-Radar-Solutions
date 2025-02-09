#include <stdio.h>

struct Student{
    int roll_number;
    char name[10];
    float marks;
};

int main() {
    int  N;
    scanf("%d",&N);
    int all_passed;
    struct Student S[N];
    for(int i=0;i<N;i++){
       scanf("%d %s %f",&S[i].roll_number,&S[i].name,&S[i].marks);
    }
    for(int i=0;i<N;i++){
       if(S[i].marks > 50.0){
        all_passed = 1;
       }
       else{
        all_passed = 0;
       }
    }
    if(all_passed){
        printf("All Passed");
    }
    else{
        printf("Not All Passed");
    }
    
    return 0;
}