#include<stdio.h>
int main()
{
	int x;
	float price = 95.125, total;
	printf("你想买多少台电脑?");
	scanf_s("%d", &x);
	total = x * price;
	printf("%d 台为%f。\n",x, total);
	return 0;
}