#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//int main()
//{
//	double sum = 0.0;
//	for (int i = 1; i <= 100; i++)
//	{
//		sum = sum + pow(-1, i + 1) * (1.0 / i);
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//int get_max(int* arr, int size)
//{
//	int max = arr[0];
//	for (int i = 0; i < size; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	return max;
//}
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", get_max(arr,size));
//}

//打印乘法口诀表

//int main()
//{
//	for (int i = 1; i < 10; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d == %-5d", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//二分查找

//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = size - 1;
//	int input = 0;
//	printf("请输入要查找的数字:");
//	scanf("%d", &input);
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < input)
//		{
//			left = mid++;
//		}
//		else
//			if (arr[mid] > input)
//			{
//				right--;
//				continue;
//			}
//			else 
//			{
//				printf("找到了，下标是%d\n", mid);
//				break;
//			}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//静态的顺序表
//#define N 100
//struct SeqList
//{
//	int arr[N];
//	int size;
//};
//int main()
//{
//	return 0;
//}
struct S
{
	int a;
	char arr[];
};
int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S) + 6);
	ps->a = 20;
	if (ps == NULL)
	{
		perror("malloc");
		return 0;
	}
	for (int i = 0; i < 6; i++)
	{
		ps->arr[i] = 'a'+i;
	}
	for (int j = 0; j < 6; j++)
	{
		printf("%c ", ps->arr[j]);
	}

	struct S* ptr = (struct S*)realloc(ps, 10);
	if (ptr == NULL)
	{
		perror("realloc");
		return 0;
	}
	ps = ptr;
	ptr == NULL;
	for (int i = 0; i < 10; i++)
	{
		ps->arr[i] = 'b' + i;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%c ", ps->arr[i]);
	}
	free(ps);
	ps = NULL;
	return 0;
}