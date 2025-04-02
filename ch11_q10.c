//#include <stdio.h>

// Recursive function to compute the nth term of the series
int series(int n) {
    // Base cases
    if (n == 1) return 2;
    if (n == 2) return 3;

    // Recursive case: series(n) = series(n-1) + series(n-2)
    return series(n - 1) + series(n - 2);
}

int main() {
    int n = 6;  // Example: Find the 6th term
    printf("series(%d) = %d\n", n, series(n));
    return 0;
}
