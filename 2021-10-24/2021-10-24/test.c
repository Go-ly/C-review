#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//写一个通用的冒泡排序
//int my_compare(const void* elem1, const void* elem2)
//{
//	return *(int*)elem1 - *(int*)elem2;
//}
//void swap(char* elem1, char* elem2, size_t width)
//{
//	for (int i = 0; i < (int)width; i++)
//	{
//		int t = *elem1;
//		*elem1 = *elem2;
//		*elem2 = t;
//		elem1++;
//		elem2++;
//	}
//}
//void my_qsort(void* base, int num, int width, int(*my_compare)(const void* elem1, const void* elem2))
//{
//	for (int i = 0; i < num; i++)
//	{
//		for (int j = 0; j < num - i - 1; j++)
//		{
//			if (my_compare(((char*)base) + j * width, ((char*)base) + (j + 1) * width) > 0)
//			{
//				swap(((char*)base) + j * width, ((char*)base) + (j + 1) * width, width);
//			}
//		}
//	}
//}
//int main()
//{
//	// 函数原型
//	// void qsort(void* base, size_t num, size_t width, int(__cdecl * compare)(const void* elem1, const void* elem2));
//
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	my_qsort(arr, num, sizeof(arr[0]), my_compare);
//	for (int i = 0; i < num; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//void myqsort(void* base, size_t nitems, size_t size, int(*compar)(const void*, const void*))
//{
//	int i, j;
//	char* st = (char*)base; //void *不方便加减，用char *加减轻松且字节跳转为1，方便控制。
//	char tmp[16]; //考虑到long double类型，临时空间做成16字节比较保险
//
//	for (i = 0; i < nitems - 1; i++)
//	{
//		for (j = 0; j < nitems - 1 - i; j++) //冒泡常用循环头
//		{
//			if (compar(st + j * size, st + (j + 1) * size)) //比较的时候跳转注意乘size
//			{
//				memcpy(tmp, st + j * size, size); //交换操作用memcpy完成就不会出问题。
//				memcpy(st + j * size, st + (j + 1) * size, size);
//				memcpy(st + (j + 1) * size, tmp, size);
//			}
//		}
//	}
//}
//#include <stdlib.h>
//int cmp(const void* elem1, const void* elem2)
//{
//	return *(char*)elem2 - *(char*)elem1;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int size = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, size - 1, sizeof(char), cmp);
//	printf("%s\n", arr);
//}

//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//
//给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC
//#include <string.h>
//int judge(char* arr1, char* arr2)
//{
//	int len = strlen(arr1);
//	for (int i = 0; i < len - 2; i++)
//	{
//		char tmp = arr1[0];
//		for (int j = 0; j < len - 1; j++)
//		{
//			arr1[j] = arr1[j + 1];
//		}
//		arr1[len - 1] = tmp;
//		if (strcmp(arr1, arr2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcde";
//	char arr2[] = "deabc";
//	printf("%d\n",judge(arr1, arr2));
//}

//实现一个函数，可以左旋字符串中的k个字符
//例如：
//
//ABCD左旋一个字符得到BCDA
//
//ABCD左旋两个字符得到CDAB

//这和上一道题差不多
#include <string.h>
void left_circle(char* arr, int k)
{
	int len = strlen(arr);
	for (int i = 0; i < k; i++)
	{
		char tmp = arr[0];
		for (int j = 0; j < len - 1; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[len - 1] = tmp;
	}
}
int main()
{
	char arr[] = "abcde";
	int k = 2;
	left_circle(arr, k);
	printf("%s\n", arr);
	return 0;
}



//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
//
//要求：时间复杂度小于O(N);
//int find(int arr[][3], int n, int row, int col)
//{
//	int i = 0;
//	int j = col - 1;
//	while (i < row && j >= 0)
//	{
//		if (arr[i][j] > n)
//		{
//			j--;
//		}
//		else if (arr[i][j] < n)
//		{
//			i++;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int n = 5;
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	printf("%d\n", find(arr, n, 3, 3));
//	return 0;
//}