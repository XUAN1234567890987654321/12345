#include<stdio.h>
int main()
{
	double C, F;
	printf("���뻪�϶�");
	scanf_s("%lf", &C);

	F = (C - 32) * 5 / 9;
	printf("���϶���%lf", F);
	return 0;
}