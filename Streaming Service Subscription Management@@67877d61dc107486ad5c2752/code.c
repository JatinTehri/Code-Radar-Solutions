#include<stdio.h>
#include<string.h>

struct Subscription{
     char username[10];
     char sub_type[10];
     float sub_cost;
};

int main(){
    int N;
    scanf("%d",&N);
    struct Subscription S[N];
    for(int i=0;i<N;i++){
        scanf("%9s %9s %f",S[i].username,S[i].sub_type,&S[i].sub_cost);
    }
    int no_of_Basic_users = 0;
    int no_of_Premium_users = 0;
    int no_of_Standard_users = 0;
    float Basic_revenue = 0;
    float Premium_revenue = 0;
    float Standard_revenue = 0;
    for(int i = 0;i<N;i++){
        if(strcmp(S[i].sub_type,"Basic") == 0){
            no_of_Basic_users += 1;
            Basic_revenue += S[i].sub_cost;
        }
        else if(strcmp(S[i].sub_type,"Premium") == 0){
            no_of_Premium_users += 1;
            Premium_revenue += S[i].sub_cost;
        }
        else if(strcmp(S[i].sub_type,"Standard") == 0){
            no_of_Standard_users += 1;
            Standard_revenue += S[i].sub_cost;
        }
    }
    printf("Basic: %d Users, Revenue: %.2f; Standard: %d Users, Revenue: %.2f; Premium: %d Users, Revenue: %.2f",no_of_Basic_users,Basic_revenue,no_of_Standard_users,Standard_revenue,no_of_Premium_users,Premium_revenue);
    return 0;
}