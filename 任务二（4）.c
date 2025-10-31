#include<stdio.h>
#include<time.h>
int main()
{
	char x;
	clock_t start, end;
	double t;
	while (1)
	{
		printf("按回车键开始计时，或输入任意一个字符退出。");
		x = getchar();
		if (x != '\n') {
			break;
		}
		start = clock();
		printf("按回车键停止计时。");
		while (getchar() != '\n');
		getchar();
		end = clock();
		t = (double)(end - start) / CLOCKS_PER_SEC / 60;
		printf("结果：%3f分钟。\n", t);

	}

	return 0;



}