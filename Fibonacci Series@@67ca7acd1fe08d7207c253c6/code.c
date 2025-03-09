int fibonacciSeries(int n){
    int arr[n];
    arr[0] = 0;
    arr[1] = 1;
    for(int i=2;i<n;i++){
        arr[i] = fibonacciSeries(n-1) + fibonacciSeries(n-2);
    }
    for(int j=0;j<n;j++){
        printf("%d ",arr[j]);
    }
    
}