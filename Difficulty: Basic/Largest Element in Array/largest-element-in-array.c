int largest(int arr[], int n) {
    // Code Here
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max< arr[i]){
            max =arr[i];
        }
    }
    return max;
}