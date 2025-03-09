int fibo (int n){
    int arr[n];
    arr[0] = 0;
    arr[1] = 1;
    for(int i=2;i<n;i++){
        arr[i] = fibo(n-1) + fibo(n-2);
    }
    for(int j=0;j<n;j++){
        printf("%d ",arr[j]);
    }
    
}