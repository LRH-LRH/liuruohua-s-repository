#define _CRT_SECURE_N0_WARNINGS
#include<stdio.h>
int main() {
    int N;
    scanf_s("%d", &N);
    int a[30][30];
    int num = 1;
    int left = 0, right = N - 1, top = 0, botton = N - 1;
    while (num <= N * N) {
        //从左到右
        for (int i = left; i <= right; i++) {
            a[top][i] = num++;
        }top++;
        //从上到下
        for (int i = top; i <= botton; i++) {
            a[i][right] = num++;
        }right--;
        //从右往左
        if (top<=botton) {
            for (int i = right; i >= left; i--) {
                a[botton][i] = num++;
            }botton--;
        }
        //从下到上
        if (left<=right) {
            for (int i = botton; i >=top; i--) {
                a[i][left] = num++;
            }left++;
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%03d", a[i][j]);
            if (j < N - 1)printf(" ");
        }printf("\n");
    }
    return 0;
}



































