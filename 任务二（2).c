#include<stdio.h>
int main()
{
	char choice;
	int p, l, t = 0;
	while (1)
	{
		printf("输入 N 计算新订单。\n输入 Q 结束程序。");
		scanf_s(" %c", &choice,1);
		if (choice == 'N')
		{
			printf("输入披萨数量：");
			scanf_s("%d", &p);
			printf("输入披萨配料数量：");
			scanf_s("%d", &l);
			char choice1;
			printf("是否需要外送？（Y/N）：");
			scanf_s(" %c", &choice1,1);
			if (choice1 == 'Y')
			{
				t = 20 * p + 2 * l + 5;
			}
			else if (choice1 == 'N')
			{
				t = 20 * p + 2 * l;
			}
			printf("订单价格为 %d个金币。\n", t);
		}

		else if (choice == 'Q')
		{
			printf("    谢谢使用！\n    (#òωó#)");
			break;
		}
	}
}