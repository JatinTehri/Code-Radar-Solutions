#include <stdio.h>

struct Student{
    int roll_number;
    char name[10];
    float marks;
};

int main() {
    int N;
    scanf("%d",&N);
    struct Student arr[N];
    for(int i=0;i<N;i++){
        scanf("%d %s %f",&arr[i].roll_number,&arr[i].name,&arr[i].marks);
    }
    for(int i=0;i<N;i++){
        printf("Roll Number: %d, Name: %s,Marks: %.2f\n",arr[i].roll_number,arr[i].name,arr[i].marks);
    }
    
    return 0;
}