#include <stdio.h>

typedef struct Employee{
    int employee_id;
    char name[10];
    long int salary;
}emp;

int main() {
    int N;
    scanf("%d",&N);
    emp E[N];
    for(int i=0;i<N;i++){
        scanf("%d %s %ld",&E.employee_id[i],&E.name[i],&E.salary[i]);
    }
    float bonus[N];
    for(int i=0;i<N;i++){
        if(E.salary[i]<50000){
            bonus[i] = 0.1 * E.salary[i];
        }
        else{
            bonus[i] = 0.05 * E.salary[i];
        }
    }
    for(int i=0;i<N;i++){
        printf("Employee ID: %d, Name: %s, Bonus: %.2f\n",E.employee_id[i],E.name[i],bonus[i]);
    }

    return 0;
}