int pageCount(int n, int p) {
    int front = p/2;
    int back = (n / 2) - (p / 2);
    
    return (front < back) ? front : back;

}