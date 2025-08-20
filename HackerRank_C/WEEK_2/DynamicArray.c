#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);
char** split_string(char*);



typedef struct {
    int *data;      // pointer to elements
    int size;       // current number of elements
    int capacity;   // allocated capacity
} Seq;
int* dynamicArray(int n, int queries_rows, int queries_columns, int** queries, int* result_count) {
        Seq* arr = (Seq*)malloc(n * sizeof(Seq));
    for (int i = 0; i < n; i++) {
        arr[i].data = NULL;
        arr[i].size = 0;
        arr[i].capacity = 0;
    }

    int lastAnswer = 0;
    int* results = (int*)malloc(queries_rows * sizeof(int));
    int resSize = 0;

    for (int i = 0; i < queries_rows; i++) {
        int type = queries[i][0];
        int x = queries[i][1];
        int y = queries[i][2];

        int idx = (x ^ lastAnswer) % n;

        if (type == 1) {
            // Append y to arr[idx]
            if (arr[idx].size == arr[idx].capacity) {
                arr[idx].capacity = arr[idx].capacity == 0 ? 2 : arr[idx].capacity * 2;
                arr[idx].data = (int*)realloc(arr[idx].data, arr[idx].capacity * sizeof(int));
            }
            arr[idx].data[arr[idx].size++] = y;
        } else if (type == 2) {
            int pos = y % arr[idx].size;
            lastAnswer = arr[idx].data[pos];
            results[resSize++] = lastAnswer;
        }
    }

    *result_count = resSize;
    return results;

}
