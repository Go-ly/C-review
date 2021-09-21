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
//	//通过下面这个函数以指针形式来访问数组
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
	int input = 0;    //存用户输入的操作
	int x = 0;
	int y = 0;  //后面存产生的随机数
	int i = 0;
	srand((unsigned)time(NULL));
	do
	{
		printf("\n******************************************\n");
		printf("*******     程序准备就绪！！！    ********\n");
		printf("******************************************\n");
		printf("*******      1.Add     2.Sub      ********\n");
		printf("*******      0.Exit               ********\n");
		printf("******************************************\n");
		printf("请选择:>\n");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
			{
				x = rand() % 100 + 1;
				y = rand() % 100 + 1;   //控制在0-100之间
				printf("%d + %d == \n", x, y);
				scanf("%d", &i);    //存用户输入的答案
				if (i == x + y)
				{
					printf("恭喜你，答对了！！！");
					break;
				}
				else
				{
					printf("答案错误！\n");
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
					printf("恭喜你，答对了！！！\n");
					continue;
				}
				else
				{
					printf("答案错误！\n");
					continue;
				}
			}
			case 0:
			{
				printf("退出程序\n");
				break;
			}
			default:
			{
				printf("选择错误\n");
				break;
			}
		}
	} while (input);
}