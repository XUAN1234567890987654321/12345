#include<stdio.h>

int main()
{
	int num1, total = 0;
	char num2;
	char num1_str[16];//建立储存字符串的库
	printf("输入一个数字：");
	scanf_s("%d", &num1);
	printf("输入一个数字（0-9）：");
	scanf_s(" %c", &num2,1);
	sprintf_s(num1_str, sizeof(num1_str),"%d", num1);//转为字符
	int i = 0;
	while (num1_str[i] != '\0')//循环读取
	{
		if (num1_str[i] == num2)
		{
			total++;//累计
		}
		i++;//检索后移一位

	}
	printf("数字%c在数字%d中出现了%d次", num2, num1, total);

	return 0;

}