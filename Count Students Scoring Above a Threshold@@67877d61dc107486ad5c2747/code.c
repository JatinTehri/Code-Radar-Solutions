#include <stdio.h>

struct Student{
    int roll_number;
    char name[10];
    float marks;
};

int main() {
    int N;
    scanf("%d",&N);
    float threshold; 
    struct Student S[N];
    for(int i=0;i<N;i++){
        scanf("%d %s %f",&S[i].roll_number,&S[i].name,&S[i].marks);
    }
    scanf("%f",&threshold);
    int count = 0;
    for(int i=0;i<N;i++){
        if(S[i].marks>threshold){
            count++;
        }
    }
    printf("Count of students scoring above %.2f: %d",threshold,count);
    return 0;
}