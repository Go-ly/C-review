#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 5;
//	int b = -1;
//}

//int main()
//{
//	int a = 0x12345678;
//}


//判断大小端字节序

//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("小端字节序\n");
//	}
//	else
//	{
//		printf("大端字节序\n");
//	}
//	return 0;
//}

//int main()
//{
//
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//
//
//	*pFloat = 9.0;
//	printf("num的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	return 0;
//}

//int main()
//{
//	float a = 5.5f;
//	return 0;
//}

//int main()
//{
//	char s = 'm';
//	char* ps = &s;
//	printf("%c\n", *ps);
//	*ps = 'w';
//	printf("%c\n", *ps);
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
//	*p = "s";
//	printf("%s\n", p);
//}


//int* arr1[6]; //整形指针的数组
//char* arr2[8]; //一级字符指针的数组
//char** arr3[7];//二级字符指针的数组

int main()
{
	int arr1[] = { 1,2,3 };
	int arr2[] = { 4,5,6 };
	int arr3[] = { 7,8,9 };
	int* arr[] = { arr1,arr2,arr3 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 3; j++)
		{
			printf("%d ", arr[i][j]);
		}
	}
	return 0;
}