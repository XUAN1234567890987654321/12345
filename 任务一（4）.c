#include<stdio.h>
int main()
{
	int x;
	float price = 95.125, total;
	printf("���������̨����?");
	scanf_s("%d", &x);
	total = x * price;
	printf("%d ̨Ϊ%f��\n",x, total);
	return 0;
}