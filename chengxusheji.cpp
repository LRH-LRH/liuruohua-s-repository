#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>


int main() {
    int a[20];
    int i;
    int sum = 0;
    int sum2 = 0;
    int count = 0;

    // ѭ������20����ί��ֲ��������飬ͬʱ�ۼ����ܷ�
    for (i = 0; i < 20; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    // ����ƽ����
    float  average = (float)sum / 20;
    printf("������ίƽ����:%.3f��.\n", average);

    // ���������жϲ��ϸ�÷֣���ƽ�������10�����ϵķ�����
    printf("���ϸ�÷�:");
    for (i = 0; i < 20; i++) {
        if ( (a[i] -(int) average > 10)||((int)average-a[i]>10) ){
            printf("%d ", a[i]);
            count++;
        }
        else {
            sum2 += a[i];
        }
    }
    printf(".\n");

    // ���ݺϸ�÷�������㲢������÷�
    if (20 - count > 0) {
        printf("���÷�:%.3f��.\n", (float)sum2 / (20 - count));
    }
    else {
        printf("�޺ϸ���.\n");
    }

    return 0;
}