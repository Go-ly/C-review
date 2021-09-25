#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//#pragma pack(4)    //修改默认对齐数为4
//struct P
//{
//	char a;
//	int b;
//};
//#pragma pack()    //取消设置的默认对齐数，还原为默认值
//int main()
//{
//	struct P p;
//	printf("%d\n", sizeof(p));
//}
//#include <stdio.h>
//int max(int x, int y)
//{
//	return (x > y) ? x : y;
//}
//int main()
//{
//	int a = 20;
//	int b = 10;
//	int ret = max(a, b);
//	printf("%d\n", ret);
//	return 0;
//}
//
//struct A
//{
//	int a : 2;
//	int b : 3;
//	int c : 30;
//	int d : 10;
//};

//int main()
//{
//	//printf("%d\n", sizeof(struct A));
//	printf("%d\n", s);
//	return 0;
//}

//int func(int a)
//{
//    int b;
//    switch (a)
//    {
//    case 1: b = 30;
//    case 2: b = 20;
//    case 3: b = 16;
//    default: b = 0;
//    }
//    return b;
//}
//int main()
//{
//    int x = 0;
//    int y = 0;
//    int z = 0;
//    int temp = 0;
//    printf("请输入三个数:>\n");
//    scanf("%d%d%d", &x, &y, &z);
//    if (x < y)
//    {
//        temp = x;
//        x = y;
//        y = temp;
//    }
//    if (x < z)
//    {
//        temp = x;
//        x = z;
//        z = temp;
//    }
//    if (y < z)
//    {
//        temp = y;
//        y = z;
//        z = temp;
//    }
//    printf("%d %d %d\n", x, y, z);
//    return 0;
//}

//int main()
//{
//	int num = 0;
//	for (num = 1; num <= 100; num++)
//	{
//		if (num % 3 == 0)
//		{
//			printf("%d ", num);
//		}
//	}
//	return 0;
//}

//int greComdiv(int x, int y)
//{
//	int min = x < y ? x : y;
//	for (int i = min; i > 0; i--)
//	{
//		if (x % i == 0 && y % i == 0)
//		{
//			return i;
//		}
//	}
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个数\n");
//	scanf("%d%d", &x, &y);
//	int result = greComdiv(x, y);
//	printf("%d\n", result);
//	return 0;
//}

//打印闰年
//void leapYear(int min, int max)
//{
//	for (int year = min; year <= max; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d  ", year);
//		}
//	}
//}

//void priNum(int min, int max)
//{
//	for (int num = min; num <= max; num++)
//	{
//		int i = 2;
//		for (; i < num; i++)
//		{
//			if (num % i == 0)
//			{
//				break;
//			}
//			else
//			{
//				continue;
//			}
//		}
//		if (i == num)
//		{
//			printf("%d ", num);
//		}
//	}
//}
//int main()
//{
//	int min = 0;
//	int max = 0;
//	printf("请输入数字范围:>\n");
//	scanf("%d%d", &min, &max);
//	priNum(min, max);
//	return 0;
//}
//


//int main()
//{
//	int count = 0;
//	int i = 0;
//	for ( i = 1; i <= 100; i++)
//	{
//		int j = i;
//		while (j >= 9)
//		{
//			int ret = j % 10;
//			j = j / 10;
//			if (ret == 9)
//			{
//				count++;
//			}
//		}
//	}
//	printf("%d\n", count);
//}

//int main()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));
//	printf("猜数字游戏\n");
//	int ret = rand() % 100 + 1;
//	while(1)
//	{
//
//		scanf("%d", &input);
//		if (input > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//			if (input < ret)
//			{
//				printf("猜小了\n");
//			}
//			else
//			{
//				printf("恭喜你，猜对了\n");
//				break;
//			}
//	}
//	return 0;
//}
//
//enum Color
//{
//	RED ,
//	GREEN,
//	BLUE
//};
//int main()
//{
//	enum Color c = RED;
//}

union U
{
	char i;
	int a;
};