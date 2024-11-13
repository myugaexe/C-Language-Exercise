#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int sum1 = 0, sum2 = 0; 
    for (int i = 0; i < N; i++) {
        sum1 += arr[i][i];
        sum2 += arr[i][N - i - 1];
    }

    printf("%d %d", sum1, sum2);
}