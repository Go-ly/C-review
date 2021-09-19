#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 10;
//	char ch = 'f';
//	int* pa = &a;
//	char* pc = &ch;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* ca = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//	printf("\n");
//	printf("%p\n", ca);
//	printf("%p\n", ca + 1);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char* parr = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(parr + i));
//	}
//	return 0;
//}

//int main()
//{
//	int* p;
//	*p = 8;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* pa = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*pa = 1;
//		pa++;
//	}
//	return 0;
//}

//int* app()
//{
//	int b = 3;
//	return &b;
//}
//int main()
//{
//	int* ps = app();
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* pa = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(pa + i));
//	}
//	return 0;
//}
//



//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", &arr[0]);
//	printf("%p\n", arr);
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int* ps = &arr;
//	for (ps = &arr[5]; ps > &arr[0];)
//	{
//		*--ps = 0;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int* ps = &arr;
//	for (ps = &arr[4]; ps >= &arr[0];ps--)
//	{
//		*ps = 0;
//	}
//	return 0;
//}

//
//
//int main()
//{
//	int arr[10]
////}
//
//int main()
//{
//	int a = 8;
//	int b = 55;
//	int* ps = &a;    //ps称为一级指针
//	int** pps = &ps;    //pps称为二级指针  用来 存储一级指针的地址
//	*pps = &b;
//	**pps = 666;
//	printf("%d\n", b);
//	printf("%d\n", **pps);
//}

int main()
{
	int a = 0;
	int b = 1;
	int c = 2;
	int* arr[3] = { &a,&b,&c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *arr[i]);
	}
}