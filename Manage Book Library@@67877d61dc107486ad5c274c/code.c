#include <stdio.h>

struct Book{
    char title[10];
    char author[10];
    int price;
};

int main() {
    int n;
    scanf("%d",&n);
    int threshold;
    int above_threshold = 1;
    struct Book B[n];
    for(int i=0;i<n;i++){
        scanf("%s %s %d",&B[i].title,&B[i].author,B[i].price);
    }
    
    scanf("%d",&threshold);
    
    for(int i=0;i<n;i++){
        if(B[i].price <= threshold){
            above_threshold = 0;
        }
        break;
    }
    if(above_threshold){
          printf("Books above price %.2f:\n",(float) (threshold));
            printf("Title: %s, Author: %s, Price: %.2f",B[i].title,B[i].author,(float)(B[i].price));
    }

    return 0;
}