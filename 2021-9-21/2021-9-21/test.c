#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//}
#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//	return 0;
//}

//print(int (*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", (*(p + i))[j]);
//		}
//		printf("\n");
//	}
//	
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };;
//	//ͨ���������������ָ����ʽ����������
//	print(arr, 3, 5);
//}
//void test()
//{
//
//}
//int main()
//{
//	printf("%p\n", &test);
//	printf("%p\n", test);
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int (*ps)(int, int) = Add;
//	int add = ps(1, 2);
//	printf("%d\n", add);
//	return 0;
//}
#include <stdio.h>
#include <time.h>
int main()
{
	int input = 0;    //���û�����Ĳ���
	int x = 0;
	int y = 0;  //���������������
	int i = 0;
	srand((unsigned)time(NULL));
	do
	{
		printf("\n******************************************\n");
		printf("*******     ����׼������������    ********\n");
		printf("******************************************\n");
		printf("*******      1.Add     2.Sub      ********\n");
		printf("*******      0.Exit               ********\n");
		printf("******************************************\n");
		printf("��ѡ��:>\n");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
			{
				x = rand() % 100 + 1;
				y = rand() % 100 + 1;   //������0-100֮��
				printf("%d + %d == \n", x, y);
				scanf("%d", &i);    //���û�����Ĵ�
				if (i == x + y)
				{
					printf("��ϲ�㣬����ˣ�����");
					break;
				}
				else
				{
					printf("�𰸴���\n");
					break;
				}
			}
			case 2:
			{
				x = rand() % 100 + 1;
				y = rand() % 100 + 1;
				printf("%d - %d == ", x, y);
				scanf("%d", &i);
				if (i == x - y)
				{
					printf("��ϲ�㣬����ˣ�����\n");
					continue;
				}
				else
				{
					printf("�𰸴���\n");
					continue;
				}
			}
			case 0:
			{
				printf("�˳�����\n");
				break;
			}
			default:
			{
				printf("ѡ�����\n");
				break;
			}
		}
	} while (input);
}