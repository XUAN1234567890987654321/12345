#include<stdio.h>
int main()
{
	double  F,C;
	printf("���뻪�϶�");
	scanf_s("%lf", &F);

	C = (F - 32) * 5 / 9;
	printf("���϶���%lf", C);
	return 0;
}