#include<stdio.h>
int main()
{
	int money = 0;
	char choice, crop;
	int price[4] = { 5,10,7,8 };
	int new, kg;
	while (1)
	{
		printf("选择菜单（修改价格【M】，出售【S】）：");
		scanf_s(" %c", &choice,1);
		if (choice == 'M')
		{
			printf("输入收入类型（小麦 [W]、洋葱 [O]、西红柿 [T] 或胡萝卜 [C]）：");
			scanf_s(" %c", &crop, 1);
			printf("输入每公斤新价格：");
			scanf_s("%d", &new);
			if (crop == 'W')
			{price[0] = new;
			 printf("小麦新价格更新为每公斤 %d 。\n", price[0]);
			}
			else if (crop == 'O')
			{price[1] = new;
			 printf("洋葱新价格更新为每公斤 %d 。\n", price[1]);
			}
			else if (crop == 'T')
			{price[2] = new;
			 printf("西红柿新价格更新为每公斤 %d 。\n", price[2]);
			}
			else if (crop == 'C')
			{price[3] = new;
			 printf("胡萝卜新价格更新为每公斤 %d 。\n", price[3]);
			}
			
		}
		else if (choice == 'S')
		{
			printf("输入出售类型（小麦 [W]、洋葱 [O]、西红柿 [T] 或胡萝卜 [C]）：");
			scanf_s(" %c", &crop, 1);
			printf("输入出售公斤数：");
			scanf_s("%d", &kg);
			if (crop == 'W')
			{
				money += price[0] * kg;
			}
			else if (crop == 'O')
			{
				money += price[1] * kg;
			}
			else if (crop == 'T')
			{
				money += price[2] * kg;	
			}
			else if (crop == 'C')
			{
				money += price[3] * kg;
			}
			if (money >= 1000)
			{
				printf("您已获得%d金币，可以休息一下了。\n", money);
				break;
			}
		}
	}
    return 0;
}