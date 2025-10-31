#include<stdio.h>
int main()
{
	int  x, total=0;

	while (total< 200)
	{
		printf("输入收入");
		scanf_s("%d", &x);
		total += x;
	}
	printf("恭喜！您已获得%d个金币，现在可以休息了。\n", total);
	return 0;

}
