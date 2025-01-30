#include <stdio.h>

struct Student{
    int roll_number;
    char name[10];
    float marks;
};

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        struct Student si;
        
    }
    for(int i=1;i<=n;i++){
        scanf("%d %s %.2f",&si.roll_number,&si.name,&si.marks);
        
    }
    for(int i=1;i<=n;i++){
        printf("Roll Number: %d, Name: %s, Marks: %.2f",si.roll_number,si.name,si.marks);
        
    }

    return 0;
}