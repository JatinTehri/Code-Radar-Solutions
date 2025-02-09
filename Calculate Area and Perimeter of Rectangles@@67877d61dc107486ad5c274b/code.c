#include <stdio.h>

struct Rectangle{
    int length;
    int breadth;
};

int main() {
    int N;
    scanf("%d",&N);
    struct Rectangle R[N];
    for(int i = 0;i<N;i++){
        scanf("%d %d",&R[i].length,&R[i].breadth);
    }
    for(int i = 0;i<N;i++){
        for(int j = 1;j<=N;j++){
          printf("Rectangle %d: Area = %.2f, Perimeter = %.2f\n",j,R[i].length * R[i].breadth, 2 * (R[i].length + R[i].breadth));
        }
        break;
    }

    return 0;
}