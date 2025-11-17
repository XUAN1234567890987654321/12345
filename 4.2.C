#include<stdio.h>

struct student//定义结构体
{
	char name[20];
	char sex[5];
	char id[20];

};
void change(struct student*s1 ,struct student*s2)//交换函数
{
	struct student temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}
void printStudent(struct student s)//输出函数
{
	printf("name:%s\nsex: %s\nid: %s\n", s.name, s.sex, s.id);
}

int main()//主函数
{
	struct student stu1, stu2;
	printf("Enter information of student1;\n");
	scanf_s("%19s %4s %19s",stu1.name, (unsigned)sizeof(stu1.name), stu1.sex,(unsigned)sizeof(stu1.sex), stu1.id,(unsigned)sizeof(stu1.id));
	printf("Enter information of student2;\n");
	scanf_s("%19s %4s %19s", stu2.name, (unsigned)sizeof(stu2.name), stu2.sex, (unsigned)sizeof(stu2.sex), stu2.id, (unsigned)sizeof(stu2.id));
	printf("Before change,stu1:\n");
	printStudent(stu1);
	printf("Before change,stu2:\n");
	printStudent(stu2);
	change(&stu1, &stu2);
	printf("After change,stu1:\n");
	printStudent(stu1);
	printf("After change,stu2:\n");
	printStudent(stu2);

	return 0;
}