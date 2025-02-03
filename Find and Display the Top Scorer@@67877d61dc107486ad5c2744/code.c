#include <stdio.h>

struct Student{
     int roll_number;
     char name[10];
     float marks;
};

int main() {
    int n;
    scanf("%d",&n);
    struct s[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&s[i].roll_number,&s[i].name,&s[i].marks);
    }
    
    int top_scorer_index = 0;
    for(int i=1;i<n;i++){
        if(s[i].marks >s[top_scorer_index].marks){
              top_scorer_index = i;
        }
    }
    printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f",s[top_scorer_index].roll_number,s[top_scorer_index].name,s[top_scorer_index].marks);
    return 0;
}