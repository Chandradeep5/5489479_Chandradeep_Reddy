int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int sockMerchant(int n, int ar_count, int* ar) {
    
    qsort(ar,n,sizeof(int),compare);
    
    int pairs = 0;
    
    for(int i = 0;i < n-1;){
        if(ar[i] == ar[i+1]){
            pairs++;
            i+=2;
        }
        else {
            i++;
        }
    }
    return pairs;

}