#include<stdio.h>
struct Snake
{
	int length;
};
int main()
{
	struct Snake sanke;
	sanke.length = 3;
	printf("蛇的初始长度为 3 米\n");
	int food;
	while (1)
	{
		printf("请输入食物的长度：");
		scanf_s("%d", &food);
		if (food <= sanke.length)
		{
			sanke.length += food;
		}
		if (food > sanke.length)
		{
			printf("蛇在吃比它大的食物时死了。总长%d 米\n", sanke.length);
			return 0;
		}
		
	}
	
	
     return 0;
}
	