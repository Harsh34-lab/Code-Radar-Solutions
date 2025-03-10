int kthsmallest(int arr[],int n,int k){
    int arr[n];
    int smallest = arr[0];
    for(int i = 0; i<n; i++){
        if(arr[i] <= smallest){
            arr[i] = smallest;
        }
    }
    return smallest;
}