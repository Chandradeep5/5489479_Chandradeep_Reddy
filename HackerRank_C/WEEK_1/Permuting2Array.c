 int cmpAsc(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int cmpDesc(const void* a, const void* b) {
    return (*(int*)b - *(int*)a);
}
char* twoArrays(int k, int A_count, int* A, int B_count, int* B) {
    
    int n = A_count;
    int n1 = B_count;
        qsort(A, A_count, sizeof(int), cmpAsc);
    qsort(B, B_count, sizeof(int), cmpDesc);
    
    for(int i = 0;i <n;i++){
        if(A[i]+B[i] < k){
            return "NO";
        }
    }
    return "YES";

}
