#include<stdio.h>
int main()
{
	double C, F;
	printf("输入华氏度");
	scanf_s("%lf", &C);

	F = (C - 32) * 5 / 9;
	printf("摄氏度是%lf", F);
	return 0;
}