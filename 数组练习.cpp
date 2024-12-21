#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<limits.h>  // 引入用于获取INT_MIN和INT_MAX的头文件
//int main() {
//    int M, N;
//    scanf("%d %d", &M, &N);
//    int a[100][100];
//    // 先初始化max为最小整数，min为最大整数;
//    int max = 0, min = 0;
//    for (int i = 0; i < M; i++) {
//        for (int j = 0; j < N; j++) {
//            scanf("%d", &a[i][j]);
//            if (a[i][j] > max)
//                max = a[i][j];
//            if (a[i][j] < min)
//                min = a[i][j];
//        }
//    }
//    printf("%d", max - min);
//    return 0;
//}
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int matrix[10][10];  // 假设最大为10阶矩阵，可根据实际调整

    // 输入矩阵元素
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int upper_sum = 0;  // 上三角元素和
    int lower_sum = 0;  // 下三角元素和
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i <= j) {
                upper_sum += matrix[i][j];
            }
            if (i >= j) {
                lower_sum += matrix[i][j];
            }
        }
    }

    printf("%d %d", upper_sum, lower_sum);
    return 0;
}