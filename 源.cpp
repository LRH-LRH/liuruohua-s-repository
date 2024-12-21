#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    int M, N;
    scanf("%d %d", &M, &N);
    int a[100][100];
    int max = a[0][0], min = a[0][0];
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &a[i][j]);
            printf("%d ", a[i][j]);
            if (a[i][j] > max)max = a[i][j];
            else if (a[i][j] < min)min = a[i][j];
        }
    }
    printf("%d", max - min);
    return 0;
}