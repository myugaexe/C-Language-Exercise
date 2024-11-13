#include <stdio.h>

unsigned long long sum(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n += sum(n - 1);
    }
}

int main() {
    int N;
    scanf("%d", &N);
    printf("%llu", sum(N));
}