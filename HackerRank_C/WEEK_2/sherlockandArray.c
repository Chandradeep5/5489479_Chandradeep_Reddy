char* balancedSums(int arr_count, int* arr) {
    
    int n = arr_count;
    long long totsum = 0;
    for (int i = 0; i < n; i++) {
        totsum += arr[i];
    }

    long long lsum = 0;
    for (int i = 0; i < n; i++) {
        long long rsum = totsum - lsum - arr[i];
        if (lsum == rsum) {
            return "YES";
        }
        lsum += arr[i];
    }

    return "NO";
}