#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<limits.h>  // �������ڻ�ȡINT_MIN��INT_MAX��ͷ�ļ�
//int main() {
//    int M, N;
//    scanf("%d %d", &M, &N);
//    int a[100][100];
//    // �ȳ�ʼ��maxΪ��С������minΪ�������;
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
    int matrix[10][10];  // �������Ϊ10�׾��󣬿ɸ���ʵ�ʵ���

    // �������Ԫ��
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int upper_sum = 0;  // ������Ԫ�غ�
    int lower_sum = 0;  // ������Ԫ�غ�
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