#include<stdio.h>
int main()
{
	printf("Hello, world!\n");
	return 0;

//任务一，打印


	char op;
	float num1, num2, resuit;
	printf("您要进行加法 (A)、减法 (S)、乘法 (M) 还是除法 (D)？");
	scanf("%C", &op);
	printf("输入第一个数字：");
	scanf("%f", &num1);
	printf("输入第二个数字：");
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
			printf("错误：分母不为0\n");
			return 1;
		}
		break;
	
		printf(" % f\n", result);
		return 0;
		






		}





		



		
		

}