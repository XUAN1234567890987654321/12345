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
		printf("请输入收入类型（小麦 [W]、洋葱 [O]、西红柿 [T] 或胡萝卜 [C]）");
		scanf_s(" %c", &type,1);
		printf("请输入您出售的公斤数：");
		scanf_s(" %d", &kg );
		t += s(type, kg);
	}
	printf("您已获得%d金币，可以休息一下了。(>▽<)\n", t);
	return 0;
}