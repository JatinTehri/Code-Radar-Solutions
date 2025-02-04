#include <stdio.h>

struct Student{
    int roll_number;
    char name[10];
    float marks;
};

int main() {
    int N;
    scanf("%d",&N);
    struct Student S[N];
    for(int i=0;i<N;i++){
        scanf("%d %s %f",&S[i].roll_number,&S[i].name,&S[i].marks);
    }
    float min_marks = S[0].marks;
    int min_index = 0;
    for(int i=0;i<N;i++){
        if(S[i].marks < min_marks){
             min_marks = S[i].marks;
             min_index = i;
        }
    }
    printf("Student with Minimum Marks: Roll Number: %d, Name: %s, Marks: %.2f",S[min_index].roll_number,S[min_index].name,S[min_index].marks);
    return 0;
}