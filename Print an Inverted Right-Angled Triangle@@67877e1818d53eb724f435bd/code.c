#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        return "*"*(n*i);
    }
    return 0;
}


// for i=0, * x 2
// for i=1, * x 1