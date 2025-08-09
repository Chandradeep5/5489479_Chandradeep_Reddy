int lonelyinteger(int a_count, int* a) {
    int res = 0;                    // intializing res equals to zero
    int n = a_count;                //n is number of elements in array
    for(int i = 0;i<n;i++) {        // for loop to go through each element
        res ^= a[i];                // doing xor operaTtion for each element
    }
    return res;
    

}