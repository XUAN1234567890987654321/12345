#include<stdio.h>
#include<time.h>
int main()
{
	char x;
	clock_t start, end;
	double t;
	while (1)
	{
		printf("���س�����ʼ��ʱ������������һ���ַ��˳���");
		x = getchar();
		if (x != '\n') {
			break;
		}
		start = clock();
		printf("���س���ֹͣ��ʱ��");
		while (getchar() != '\n');
		getchar();
		end = clock();
		t = (double)(end - start) / CLOCKS_PER_SEC / 60;
		printf("�����%3f���ӡ�\n", t);

	}

	return 0;



}