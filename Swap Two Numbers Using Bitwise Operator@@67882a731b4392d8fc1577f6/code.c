#include<stdio.h>

int swapp(int* p1,int* p2){
    *p1 = *p2;
    *p2 = *p1;
    printf("%d %d",*p1,*p2);
    return 0;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int* p1,p2;
    p1 = &a;
    p2 = &b;
    swapp(p1,p2);
    return 0;
}