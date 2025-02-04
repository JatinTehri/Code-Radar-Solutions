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
    float avg = 0,total = 0;
    for(int i=0;i<N;i++){
        scanf("%d %s %f",&S[i].roll_number,&S[i].name,&S[i].marks);
    }
    for(int i=0;i<N;i++){
        total += S[i].marks;
    }
    avg = total/N;
    printf("Total Marks: %.2f\n Average Marks: %.2f",total,avg);

    return 0;
}