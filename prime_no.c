#include <stdio.h>
#include <math.h>

int isPrime(int N) {
    if ( N < 2) return 0;
    int limit = sqrt(N);
    for (int i = 2; i <= limit; i++){
        if (N % i == 0) return 0;
    }
    return 1;
}

int main() {
    for (int N = 0; N <= 12; N++){
        printf("Is %d Prime: %d\n", N, isPrime(N));
    }
    return 0;
}