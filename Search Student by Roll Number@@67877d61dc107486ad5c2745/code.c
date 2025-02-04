#include <stdio.h>

struct Student{
   int roll_number;
   char name[10];
   float marks;
};

int main() {
    int N;
    scanf("%d",&N);
    int req_student;
    struct Student S[N+1];
    for(int i=1;i<=N;i++){
        scanf("%d %s %f",&S[i].roll_number,&S[i].name,&S[i].marks);
    }
    scanf("%d",&req_student);
    if(req_student <= N){
        printf("Roll Number: %d, Name: %s, Marks: %.2f",S[req_student].roll_number,S[req_student].name,S[req_student].marks);
    }else{
        printf("Student not found");
    }
    return 0;
}