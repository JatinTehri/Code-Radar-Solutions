#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    int count = 0;
    for(int i=1;i<=N;i++){
        count +=i;
    }
    printf("%d",count);
    return 0;
}