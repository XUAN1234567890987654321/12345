#include<stdio.h>
int main()
{
	printf("Hello, world!\n");
	return 0;

//����һ����ӡ


	char op;
	float num1, num2, resuit;
	printf("��Ҫ���мӷ� (A)������ (S)���˷� (M) ���ǳ��� (D)��");
	scanf("%C", &op);
	printf("�����һ�����֣�");
	scanf("%f", &num1);
	printf("����ڶ������֣�");
	scanf("%f",&num2);
	switch (op) {
		int(result);
	case'A':
		result = num1 + num2;
		break;
	case'B':
		result = num1 - num2;
		break;
	case'C':
		result = num1 * num2;
		break;
	case'D':
		if (num2 != 0) {
			result = num1 / num2;
		}
		else {
			printf("���󣺷�ĸ��Ϊ0\n");
			return 1;
		}
		break;
	
		printf(" % f\n", result);
		return 0;
		






		}





		



		
		

}