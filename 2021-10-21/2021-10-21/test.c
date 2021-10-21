#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//调整数组使奇数全部都位于偶数前面。
//
//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。


//方法一
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < size - 1; i++)
//	{
//		for (int j = 0; j < size - 1 - i; j++)
//		{
//			if (arr[j] % 2 == 0)
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//方法二

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int* head = arr;
	int* tail = &arr[size - 1];
	for (int i = 0; i < size; i++)
	{
		while (*head % 2 != 0 && head <= &arr[size])
		{
			head++;
		}
		while (*tail % 2 == 0 && tail >= arr)
		{
			tail--;
		}
		// 让head指向偶数，tail指向奇数
		if (*head % 2 == 0 && *tail % 2 != 0 && head < tail)        //head < tail 保持head在tail前面
		{
			int tmp = *head;
			*head = *tail;
			*tail = tmp;
			head++;
			tail--;
		}
	}
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

