void miniMaxSum(int arr_count, int* arr) {
    
    int n = arr_count;        // finding array length
    
    int totsum = 0;          // initializing total sum
                                // initializing minval and maxval with first element of the array
    int minval = arr[0];
    int maxval = arr[0];
    
    for(int i = 0;i < n;i++) {         // for loop 
        totsum += arr[i];              // calculating total sum of the array elements
        
        if(arr[i] < minval) minval = arr[i];  // checking if current element is less than minval, if yes then update minval
        if(arr[i] > minval) maxval = arr[i];  // checking if current element is greater than maxval, if yes then update maxv
    }
       long long minSum = totsum - maxval;   // calculating minimum sum by subtracting maxval from total sum
    long long maxSum = totsum - minval;   // calculating maximum sum by subtracting minval from total sum

    printf("%lld %lld\n", minSum, maxSum);

}