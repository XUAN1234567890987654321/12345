#include <stdio.h>

// ��������ӷ�
int A(int n1, int n2) {
    int result1 = n1 + n2;
    return result1;
}

// ����
int S(int n1, int n2) {
    int result2 = n1 - n2;
    return result2;
}

// �˷�
int M(int n1, int n2) {
    int result3 = n1 * n2;
    return result3;
}

//������ע���������Ϊ0��
int D(int n1, int n2) {
    if (n2 == 0) {
        printf("��������Ϊ0\n");
        return 0;
    }
    int result4 = n1 / n2;
    return result4;
}

int main() {
    char io;
    float nl, n2;
    int result;

    printf("��Ҫ���мӷ�(A)������(S)���˷�(M)���ǳ���(D)? ");
    scanf_s("%c", &io, 1);

    printf("�����һ�����֣�");
    scanf_s("%f", &nl);

    printf("����ڶ������֣�");
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
        printf("�����������Ч\n");
    }

    return 0;
}