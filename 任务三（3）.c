#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i;
    int start;
    int jump ;
    int nai[10];
    int people = 0;
    srand((unsigned)time(NULL));

    // 初始化随机耐久(1-5)并输出
    for (i = 0; i < 10; i++) {
        nai[i] = rand() % 5 + 1;
        printf("%d号踏板耐久度：%d\n", i + 1, nai[i]);
    }
    for (i = 0;;)
    {
        if (nai[i] <= 0)
        {
            start = i - 1;
            jump = 0;
            while (i < 10 && nai[i] <= 0) {
                jump++;
                i++;
            }


            if (i >= 10 || start < 0 || nai[start] <= 0 || nai[start] < jump) {
                break;
            }
            nai[start] -= jump;
            nai[i]--;
        }
        else
        {
         nai[i]--;
        }
        if (i == 9)
        {
            if (nai[i] < 0)
            {
                break;
            }
            people++;
            i = 0;

           
        }
        else 
        {
            i++;
        }
        printf("Bridge: ");
        for (int k = 0; k < 10; k++) {
            printf("%d ", nai[k]);  // 显示每块木板的剩余耐久度
        }
        printf("\n");
    }
    // 统计并输出所有损坏踏板
    int totalBroken = 0;
    printf("损坏的踏板有：");
    for (int i = 0; i < 10; i++) {
        if (nai[i] <= 0) { // 判断耐久是否为0（损坏）
            totalBroken++;
            printf("%d号 ", i + 1);
        }
    }
    printf("\n一共有%d人过桥，最终%d块踏板损坏\n", people, totalBroken);
    return 0;
}