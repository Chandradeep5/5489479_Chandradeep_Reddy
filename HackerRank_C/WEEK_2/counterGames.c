#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to check if n is power of 2
int isPowerOfTwo(long n) {
    return (n && !(n & (n - 1)));
}

// Function to find largest power of 2 less than n
long largestPowerOfTwo(long n) {
    long p = 1;
    while (p << 1 <= n) {
        p <<= 1;
    }
    return p;
}

char* counterGame(long n) {
    int moves = 0;

    while (n > 1) {
        if (isPowerOfTwo(n)) {
            n >>= 1; // divide by 2
        } else {
            n -= largestPowerOfTwo(n);
        }
        moves++;
    }

    if (moves % 2 == 1)
        return "Louise";
    else
        return "Richard";
}

// Driver code
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long n;
        scanf("%ld", &n);
        printf("%s\n", counterGame(n));
    }
    return 0;
}
