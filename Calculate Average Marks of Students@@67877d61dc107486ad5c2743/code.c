#include <stdio.h>

struct Student{
    int roll_number;
    char name[10];
    float marks;
};

int main() {
    int N;
    float avg = 0;
    scanf("%d",&N);
    struct Student S[N];
    for(int i=0;i<N;i++){
        scanf("%d %s %f",&S[i].roll_number,&S[i].name,&S[i].marks);
    }
    for(int i=0;i<N;i++){
        avg += S[i].marks;
    }
    printf("Average Marks: %.2f",avg/N);
    
    return 0;
}