int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
        int a, b, result;

    // Take input from the user
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Perform XOR operation
    result = a ^ b;

    // Print the result
    printf("XOR of %d and %d is: %d\n", a, b, result);

    return 0;
}