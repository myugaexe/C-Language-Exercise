#include <stdio.h>

unsigned long long faktorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}

int main() {
    int N;
    scanf("%d", &N);
    printf("%llu", faktorial(N));
}