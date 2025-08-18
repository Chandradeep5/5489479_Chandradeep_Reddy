
int superDigit(char* n, int k) {
    long sum = 0;
    for (int i = 0; n[i] != '\0'; i++) {        // convert string to sum of digits
        sum += (n[i] - '0');
    }
    
  
    long num = sum * k;

                                // Keep reducing until single digit
    while (num >= 10) {
        long s = 0;
        while (num > 0) {
            s += num % 10;
            num /= 10;
        }
        num = s;
    }

    return (int)num;

}