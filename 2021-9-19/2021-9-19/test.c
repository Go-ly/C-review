#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//struct Peo
//{
//	char name[20];
//	int age;
//}p1,p2,p3;
//int main()
//{
//	struct Peo p = { "����",18 };   //ͨ���ṹ�������������ṹ�����
//	printf("%s  %d\n", p.name, p.age);
//	//�޸����������
//	strcpy(p.name, "����");
//	p.age = 20;
//	printf("%s  %d\n", p.name, p.age);
//	return 0;
//}


//struct Peo
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	struct Peo p = { "����",18 };
//	struct Peo* ps = &p;
//	printf("%s   %d\n", ps->name, ps->age);
//	return 0;
//}

struct Peo
{
	char name[20];
	int age;
};
void print2(struct Peo* ps)
{
	printf("%s   %d\n", ps->name, ps->age);
}
int main()
{
	struct Peo p = { "����",18 };
	print2(&p);
	return 0;
}