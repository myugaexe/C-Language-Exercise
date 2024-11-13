#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int arr1[A][B];
    for (int i = 0; i < A; i++) {
        for (int j = 0; j < B; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }

    int N, M;
    scanf("%d %d", &N, &M);

    if (B != N) {
        printf("Tidak semudah itu Ferguso\n");
        return 0;
    }

    int arr2[N][M];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }

    int result[A][M];
    for (int i = 0; i < A; i++) {
        for (int j = 0; j < M; j++) {
            result[i][j] = 0; 
            for (int k = 0; k < B; k++) {
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    
    for (int i = 0; i < A; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
