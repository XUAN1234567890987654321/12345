#include<stdio.h>
int main()
{
	int  x, total=0;

	while (total< 200)
	{
		printf("��������");
		scanf_s("%d", &x);
		total += x;
	}
	printf("��ϲ�����ѻ��%d����ң����ڿ�����Ϣ�ˡ�\n", total);
	return 0;

}
