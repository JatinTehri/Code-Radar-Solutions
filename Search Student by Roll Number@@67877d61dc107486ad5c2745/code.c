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
    for(int i=1;i<N+1;i++){
        scanf("%d %s %f",&S[i].roll_number,&S[i].name,&S[i].marks);
    }
    scanf("%d",&req_student);
    int found = 0;
    for(int i=1;i<=N;i++){
        if(S[i].roll_number == req_student){
            printf("Roll Number: %d, Name: %s, Marks: %.2f",S[req_student].roll_number,S[req_student].name,S[req_student].marks);
            found = 1;
            break;
        }  
    } 
    if(!found){
        printf("Student not found");
    }        
        
    return 0;
}