void sort_even_odd(int n, int a[]) {
    int i, j, temp;
    
    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            for (j = i; j > 0 && a[j-1] % 2 != 0; j--) {
                temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }
    }
}
