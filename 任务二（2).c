#include<stdio.h>
int main()
{
	char choice;
	int p, l, t = 0;
	while (1)
	{
		printf("���� N �����¶�����\n���� Q ��������");
		scanf_s(" %c", &choice,1);
		if (choice == 'N')
		{
			printf("��������������");
			scanf_s("%d", &p);
			printf("������������������");
			scanf_s("%d", &l);
			char choice1;
			printf("�Ƿ���Ҫ���ͣ���Y/N����");
			scanf_s(" %c", &choice1,1);
			if (choice1 == 'Y')
			{
				t = 20 * p + 2 * l + 5;
			}
			else if (choice1 == 'N')
			{
				t = 20 * p + 2 * l;
			}
			printf("�����۸�Ϊ %d����ҡ�\n", t);
		}

		else if (choice == 'Q')
		{
			printf("    ллʹ�ã�\n    (#���ب�#)");
			break;
		}
	}
}