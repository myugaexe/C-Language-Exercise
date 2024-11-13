#include <stdio.h>

unsigned long long fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); 
    }
}

int main() {
    int N;
    scanf("%d", &N);
    printf("%llu", fibonacci(N));
}