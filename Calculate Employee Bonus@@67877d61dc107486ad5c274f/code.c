#include <stdio.h>

typedef struct Employee{
    int employee_id;
    char name[10];
    int salary;
}emp;

int main() {
    int N;
    scanf("%d",&N);
    emp E[N];
    for(int i=0;i<N;i++){
        scanf("%d %9s %d",&E[i].employee_id,E[i].name,&E[i].salary);
    }
    int bonus[N];
    for(int i=0;i<N;i++){
        if(E[i].salary < 50000){
            bonus[i] = 0.1 * E[i].salary;
        }
        else{
            bonus[i] = 0.05 * E[i].salary;
        }
    }
    for(int i=0;i<N;i++){
        printf("Employee ID: %d, Name: %s, Bonus: %.2f\n",E[i].employee_id,E[i].name,bonus[i]);
    }

    return 0;
}