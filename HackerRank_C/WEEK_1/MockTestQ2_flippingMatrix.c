int flippingMatrix(int matrix_rows, int matrix_columns, int** matrix) {
    
    int mr = matrix_rows;
    int mc = matrix_columns;
    
    int n = mr / 2;
    int sum = 0;
    int max = 0;
    
    for(int i = 0;i < n;i++){
        for(int j = 0; j < n;j++){
            int a =matrix[i][j];
            int b = matrix[i][mc-j-1];
            int c = matrix[mr-i-1][j];
            int d = matrix[mr-i-1][mc-j-1];
            
            
            max = a;
            if(b > max) max = b;
            if(c > max) max = c;
            if(d > max) max = d;
            
            sum+=max;
        }
    } 
    return sum;

}