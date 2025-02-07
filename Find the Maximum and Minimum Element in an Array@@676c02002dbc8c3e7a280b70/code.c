#include <stdio.h>


int main() {
    int n;
    scanf("%d",n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min_element = arr[0];
    int min_element_index = 0;
    
    for(int i=0;i<n;i++){
        if(arr[i]<arr[min_element_index]){
            min_element_index = i;
        }
    }

    int max_element = arr[0];
    int max_element_index = 0;

    for(int i=0;i<n;i++){
        if(arr[i] > arr[max_element_index]){
            max_element_index = i;
        }
    }
    printf("%d %d",arr[min_element_index],arr[max_element_index]);
    return 0;
}