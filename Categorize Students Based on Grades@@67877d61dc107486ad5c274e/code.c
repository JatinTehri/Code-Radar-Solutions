#include<stdio.h>

struct Student{
    int roll_number;
    char name[10];
    float marks;
};

int main(){
    int N;
    scanf("%d",&N);
    struct Student S[N];
    for(int i=0;i<N;i++){
        scanf("%d %9s %f",&S[i].roll_number,S[i].name,&S[i].marks);
    }
    for(int i=0;i<N;i++){
        if(S[i].marks >=85){
            printf("Roll Number: %d, Name: %s, Grade: A\n",S[i].roll_number,S[i].name);
        }
        else if(S[i].marks >=70 && S[i].marks <=84){
            printf("Roll Number: %d, Name: %s, Grade: B\n",S[i].roll_number,S[i].name);
        }
        else if(S[i].marks < 70){
            printf("Roll Number: %d, Name: %s, Grade: C\n",S[i].roll_number,S[i].name);
        }
    }
    return 0;
}