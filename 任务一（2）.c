#include <stdio.h>

// 函数定义加法
int A(int n1, int n2) {
    int result1 = n1 + n2;
    return result1;
}

// 减法
int S(int n1, int n2) {
    int result2 = n1 - n2;
    return result2;
}

// 乘法
int M(int n1, int n2) {
    int result3 = n1 * n2;
    return result3;
}

//除法（注意除数不能为0）
int D(int n1, int n2) {
    if (n2 == 0) {
        printf("除数不能为0\n");
        return 0;
    }
    int result4 = n1 / n2;
    return result4;
}

int main() {
    char io;
    float nl, n2;
    int result;

    printf("您要进行加法(A)、减法(S)、乘法(M)还是除法(D)? ");
    scanf_s("%c", &io, 1);

    printf("输入第一个数字：");
    scanf_s("%f", &nl);

    printf("输入第二个数字：");
    scanf_s("%f", &n2);

    switch (io) {
    case 'A':
        result = A((int)nl, (int)n2); 
        printf("result1: %d\n", result);
        break;
    case 'S':
        result = S((int)nl, (int)n2);
        printf("result2: %d\n", result);
        break;
    case 'M':
        result = M((int)nl, (int)n2);
        printf("result3: %d\n", result);
        break;
    case 'D':
        result = D((int)nl, (int)n2);
        printf("result4: %d\n", result);
        break;
    default:
        printf("输入运算符无效\n");
    }

    return 0;
}