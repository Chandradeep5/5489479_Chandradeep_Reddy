int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    
    int n = arr_rows;               // n is number of rows in the matrix
    int n1= arr_columns;            // n1 is number of columns in the matrix
    int res = 0;                // res is the result variable to store the difference
    int ls = 0;           // ls is the left diagonal sum        
    int rs = 0;         // rs is the right diagonal sum
    
    for(int i = 0;i<n;i++) {           // for loop to go through each row
        ls += arr[i][i];        // adding the left diagonal element
        rs += arr[i][n1-1-i];                   // adding the right diagonal element
    }
    
    int dif = ls-rs;                //calculating the diff from las and rs
    if(dif < 0) dif = -dif;         // if diff is negative, make it positive        
    
    return dif;
    

}