#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//дһ��ͨ�õ�ð������
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
//	// ����ԭ��
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
//	char* st = (char*)base; //void *������Ӽ�����char *�Ӽ��������ֽ���תΪ1��������ơ�
//	char tmp[16]; //���ǵ�long double���ͣ���ʱ�ռ�����16�ֽڱȽϱ���
//
//	for (i = 0; i < nitems - 1; i++)
//	{
//		for (j = 0; j < nitems - 1 - i; j++) //ð�ݳ���ѭ��ͷ
//		{
//			if (compar(st + j * size, st + (j + 1) * size)) //�Ƚϵ�ʱ����תע���size
//			{
//				memcpy(tmp, st + j * size, size); //����������memcpy��ɾͲ�������⡣
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

//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//
//���磺����s1 = AABCD��s2 = BCDAA������1
//
//����s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC
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

//ʵ��һ�����������������ַ����е�k���ַ�
//���磺
//
//ABCD����һ���ַ��õ�BCDA
//
//ABCD���������ַ��õ�CDAB

//�����һ������
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



//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�
//
//Ҫ��ʱ�临�Ӷ�С��O(N);
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