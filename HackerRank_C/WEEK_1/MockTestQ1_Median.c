
int findMedian(int arr_count, int* arr) {
    
    int n = arr_count;
    int median = 0;
    
    for(int i =0 ;i < n-1;i++) {
        for(int j = 0;j < n-i-1;j++){
            
        
        if(arr[j] > arr[j+1] ) {
            int temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
        }
        }
    }
    
    if( n % 2 != 0){
        median= arr[n/2];
    }
    else {
        median= (arr[n/2 - 1] + arr[n/2]) / 2;
    }
    
    
    return median;
    

}