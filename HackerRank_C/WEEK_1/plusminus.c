void plusMinus(int arr_count, int* arr) {
    
    int n = arr_count;           // finding array length
    int countZ = 0;              // Intializing countZ,countP,countN
    int countP = 0;
    int countN = 0;
    
    
    for(int i = 0; i < n;i++) {         // for loop 
        if(arr[i] == 0){                 // checking wheather arr element is zeroor nor. if zero then countZ will increment by 1
            countZ++;
        }
        else if(arr[i] > 0) {      // checking wheather element is positive or not
            countP++;
        }
        else  {                     // if element is not positive or zero then remaning elements count will increase at countN 
            countN++;
        }
    }
    double proP = (double)countP / n;   // finding proporion for positive
    double proN = (double)countN / n;   // finding proportion for negative
    double proZ = (double)countZ / n;   // finding proportion of zero values
    
    printf("%.6f\n",proP);
    printf("%.6f\n",proN);
    printf("%.6f\n",proZ);

}
