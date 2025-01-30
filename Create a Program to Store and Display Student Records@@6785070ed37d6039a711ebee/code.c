#include <stdio.h>

struct Student{
    int roll_number;
    char name[10];
    float marks;
};

int main() {
    int n;
    scanf("%d",&n);
    struct Student s[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&s[i].roll_number,&s[i].name,&s[i].marks); 
    }
    
    for(int i=1;i<=n;i++){
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n",s[i].roll_number,s[i].name,s[i].marks);
        
    }

    return 0;
}