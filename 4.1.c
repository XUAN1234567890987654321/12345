#include<stdio.h>
#include<string.h>//strcmp函数
void study(int dobigman)//学
{
	int num;
	printf("请输入一个正整数：");
	scanf_s("%d", &num);
	if (num < 0) {
		if (dobigman) //从4回归的
		{
			printf("（- _ -）Care for mentally retarded children, we stay together。\nYou are such a sweet little fool.\n");
		}
		else 
		{
			printf("（- _ -）Care for mentally retarded children, we stay together。\n");
			return;
		}
	}
	for (int i = 1; i <= num; i++)//乘法表
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d*%d=%d ", j, i, i * j);
		}
		printf("\n");
	}
}
void girlfriend()//女朋友
{
	printf("吾日三省吾身，高否，帅否，富否 \n 否，滚去学习，\n");
	study(0);
}
void money()//挣钱
{
	char choice1;
	printf("有钱后想干什么？\n A．找女朋友         B:买同济版高等数学，好好学习\n ");
	scanf_s(" %c", &choice1, 1);
	switch (choice1)
	{
	case 'A':girlfriend();
		break;
	case'B':study(0);
		break;
	}
	
}
void bigman()//大佬
{
	char choice2;
	printf("你为什么学技术？\n  A．为了变有钱      B. 因为我热爱学习\n ");
	scanf_s(" %c", &choice2, 1);
	switch (choice2)
	{
	case'A':money();
		break;
	case'B':study(1);
		break;
		
	}

}
void menu()//菜单页面
{
	int choice;
	while (1)
	{
		printf("菜单  \n 1.我要好好学习\n 2.我要女朋友\n 3.我要变有钱\n 4.我要变成技术大佬\n");
		scanf_s(" %d", &choice);
		switch (choice)
		{
		   case 1:study(0); 
			   break;
		   case 2:girlfriend();
			   break;
		   case 3:money();
			   break;
		   case 4:bigman();
			   break;
		   default:printf("认真的？再来！\n");

		}
	
	}
}

char name[] = "李奕轩";
char sex[] = "男";
char id[] = "2507002060";
int main()//主页面
{
	char turepassword[7] = "114514";//正确密码
	char  enterpassword[7] = { 0 };//用户输入的密码
	int error = 0;//错误次数

	while (1)
	{
		printf("ciallo\n please enter your password:\n ");
		scanf_s(" %s", enterpassword, 7);
		if (strcmp(enterpassword, "114514") == 0)//strcmp函数比较字符串是否相等
		{
			printf("姓名：%s\n 性别：%s\n 学号%s\n", name, sex, id);
			menu();
			break;
		}
		else
		{
			error++;
			if (error >= 3)//错误三次
			{
				printf("pro,you are a bad boy\n");
				break;
			}
			printf("凸(艹皿艹 )\n");
		}
	}
	return 0;
}