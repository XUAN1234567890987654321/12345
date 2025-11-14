#include<stdio.h>
int main()
{
	int year, century;

	printf("输入：\n year=");
	scanf_s("%d", &year);
	if (year <= 0)
	{
		printf("年份不能为0或负数！(*￣︿￣)");

	}
	else if (year > 0)
	{
		century = (year + 99) / 100;
		
		printf("输出：\n century=%d", century);

	}
	return 0;

}