int* countingSort(int arr_count, int* arr, int* result_count) {
        // Step 1: Always output 100 integers
    *result_count = 100;

    // Step 2: Allocate memory for frequency array
    int* freq = (int*)calloc(100, sizeof(int));   // calloc initializes with 0

    // Step 3: Count each number's frequency
    for (int i = 0; i < arr_count; i++) {
        freq[arr[i]]++;
    }

    // Step 4: Return the frequency array
    return freq;
}