#include <stdio.h>

int main() {
    int N, M, i, j;
    scanf("%d %d", &N, &M);

    int arr1[N][M];
    int arr2[M][N];
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            scanf("%d", &arr1[i][j]);
            arr2[j][i] = arr1[i][j];
        }
    }

    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
}