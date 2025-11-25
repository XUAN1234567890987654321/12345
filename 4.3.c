#include<stdio.h>
#include<stdlib.h>//exit()出处
struct student//定义结构体
{
	char name[10];
	char id[20];
	char sex[3];
	float height;
};
void menu(struct student* s)//菜单函数
{
	printf("菜单\n");
	printf("1.姓名： %s\n", s->name);
	printf("2.学号； %s\n", s->id);
	printf("3.性别： %s\n", s->sex);
	printf("4.身高： %f cm\n", s->height);
	printf("5.退出登录\n");
};
int main()//主函数
{
	char username[] = "yiquaner";//正确的用户名和密码
	char truepassword[] = "xuan20071011";
	char inputusername[30];//输入的用户名和密码
	char inputpassword[30];
	int chance = 5;//登录机会
	while (chance > 0)//登录循环
	{
		printf("请输入用户名：");
		scanf_s("%s", inputusername, 30);
		printf("请输入密码：");
		scanf_s("%s", inputpassword, 30);
		int truename = 1;
		for (int i = 0;; i++)//比较用户名
		{
			if (inputusername[i] != username[i])
			{
				truename = 0;
				break;
			}
			if (inputusername[i] == '\0')
				break;
		}
		int truepass = 1;//比较密码
		for (int j = 0;; j++)//
		{
			if (inputpassword[j] != truepassword[j])
			{
				truepass = 0;
				break;
			}
			if (inputpassword[j] == '\0')
				break;
		}
		if (truename && truepass)
		{
			printf("登录成功！︿(￣︶￣)︿ \n");
			break;

		}
		else
		{
			chance--;//减少一次机会
			if (chance > 0)
			{
				printf("用户名或密码错误！你还有%d次机会！ \n", chance);
			}
			else
			{
				printf("哼，渣男，骗子！(*￣︿￣) \n");
				exit(0);
			}

		}

	}
	struct student s = { "李奕轩","250700206","男",180.5 };//初始化结构体变量
	struct student* ps = &s;//结构体指针
	int choice;
	while (1)
	{
		menu(ps);
        printf("请输入你的选择：");
		scanf_s("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("输入新的姓名：");
			scanf_s("%s", ps->name, 10);
			struct menu;
			break;
		case 2:
			printf("输入新的学号：");
			scanf_s("%s", ps->id, 20);
			struct menu;
			break;
		case 3:
			printf("输入新的性别：");
			scanf_s("%s", ps->sex, 3);
			struct menu;
			break;
		case 4:
			printf("输入新的身高：");
			scanf_s("%f", &ps->height);
			struct menu;
			break;
		case 5:
			printf("已退出登录！ \n");
			return 0;
		default:
			printf("选择错误，请重新选择！ \n");
			break;
		}

	}
	return 0;
}