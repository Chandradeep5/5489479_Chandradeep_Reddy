long sumXor(long n) {
        if (n == 0) return 1;  // special case
    
    int count = 0;
    while (n > 0) {
        if ((n & 1) == 0)    // check if LSB is 0
            count++;
        n >>= 1;            // shift right
    }
    
    
    return 1L << count;

}