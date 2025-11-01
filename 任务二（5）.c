#include<stdio.h>
int main()
{
	double  F,C;
	printf("输入华氏度");
	scanf_s("%lf", &F);

	C = (F - 32) * 5 / 9;
	printf("摄氏度是%lf", C);
	return 0;
}