#include<stdio.h>
int s(char type, int kg)
{
	switch (type)
	{
	  case 'W':
		return kg * 5;
		
	  case 'O':
		  return kg * 10;
		 
	  case'T':
		  return kg * 7;
		  
	  case'C':
		  return kg * 8;
	}

}

int main()
{
	char type;
	int kg, t = 0;
	while (t < 1000) 
	{
		printf("�������������ͣ�С�� [W]����� [O]�������� [T] ����ܲ� [C]��");
		scanf_s(" %c", &type,1);
		printf("�����������۵Ĺ�������");
		scanf_s(" %d", &kg );
		t += s(type, kg);
	}
	printf("���ѻ��%d��ң�������Ϣһ���ˡ�(>��<)\n", t);
	return 0;
}