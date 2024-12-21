#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>


int main() {
    int a[20];
    int i;
    int sum = 0;
    int sum2 = 0;
    int count = 0;

    // 循环读入20个评委打分并存入数组，同时累加求总分
    for (i = 0; i < 20; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    // 计算平均分
    float  average = (float)sum / 20;
    printf("所有评委平均分:%.3f分.\n", average);

    // 遍历数组判断不合格得分（与平均分相差10分以上的分数）
    printf("不合格得分:");
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

    // 根据合格得分情况计算并输出最后得分
    if (20 - count > 0) {
        printf("最后得分:%.3f分.\n", (float)sum2 / (20 - count));
    }
    else {
        printf("无合格打分.\n");
    }

    return 0;
}