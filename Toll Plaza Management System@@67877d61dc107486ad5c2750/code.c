#include<stdio.h>
#include<string.h>
struct Vehicle{
     char vehicle_number[10];
     char vehicle_type[10];
     int  toll_amount;
};

int main(){
    int N;
    scanf("%d",&N);
    struct Vehicle V[N];
    for(int i=0;i<N;i++){
        scanf("%9s %9s %d",V[i].vehicle_number,V[i].vehicle_type,&V[i].toll_amount);
    }
    int toll_car = 0;
    int toll_truck = 0;
    int toll_bike = 0;
    for(int i=0;i<N;i++){
        if(strcmp(V[i].vehicle_type,"Car") == 0){
            toll_car += V[i].toll_amount;
        }
        else if(strcmp(V[i].vehicle_type,"Truck") == 0){
            toll_truck += V[i].toll_amount;
        }
        else {
            toll_bike += V[i].toll_amount;
        }
    }
    printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f",(float)(toll_car),(float)(toll_truck),(float)(toll_bike));

    return 0;
}

/*the function strcmp() is used to compare two strings character by character. It returns:

0 if the strings are identical

A positive value if the first string is greater than the second string

A negative value if the first string is less than the second string*/