#include <stdio.h>

struct Student{
    int roll_number;
    char name[10];
    float marks;
};

int main() {
    int  N;
    scanf("%d",&N);
    struct Student S[N];
    for(int i=0;i<N;i++){
       scanf("%d %s %f",&S[i].roll_number,&S[i].name,&S[i].marks);
    }
    float highest_marks = S[0].marks;
    int highest_index = 0;
    for(int i=0;i<N;i++){
        if(S[i].marks > highest_marks){
            highest_marks = S[i].marks;
            highest_index = i;
        }
    }
    printf("Highest Marks: %.2f",highest_marks);

    return 0;
}