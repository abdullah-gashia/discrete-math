#include <stdio.h>
#include <math.h>

// Function to compute nth term iteratively
long long find_nth_term(int n) {
    if (n == 0) return 1;
    if (n == 1) return 3;
    if (n == 2) return 5;

    long long a0 = 1, a1 = 3, a2 = 5, an;

    for (int i = 3; i <= n; i++) {
        an = a2 * pow(a1, 2) * pow(a0, 3); // a_n = a_(n-1) * a_(n-2)^2 * a_(n-3)^3
        a0 = a1;
        a1 = a2;
        a2 = an;
    }

    return an;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printf("The %d-th term is: %lld\n", n, find_nth_term(n));
    
    return 0;
}
