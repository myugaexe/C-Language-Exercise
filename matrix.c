#include <stdio.h>

int main() {
    int N, count = 1;
    scanf("%d", &N);

    int arr[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            arr[j][i] = count++;
            if (count > N * N) {
                break;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}