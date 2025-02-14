#include<stdio.h>

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
        scanf("%9s %9s %d",V[i].vehicle_number,V[i].vehicle_type,&toll_amount);
    }
    int toll_car = 0;
    int toll_truck = 0;
    int toll_bike = 0;
    for(int i=0;i<N;i++){
        if(V[i].vehicle_type == "Car"){
            toll_car += 50;
        }
        else if(V[i].vehicle_type == "Truck"){
            toll_truck += 100;
        }
        else{
            toll_bike += 20;
        }
    }
    printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f",(float)(toll_car),(float)(toll_truck),(float)(toll_bike));

    return 0;
}