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


//�жϴ�С���ֽ���

//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("С���ֽ���\n");
//	}
//	else
//	{
//		printf("����ֽ���\n");
//	}
//	return 0;
//}

//int main()
//{
//
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n��ֵΪ��%d\n", n);
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);
//
//
//	*pFloat = 9.0;
//	printf("num��ֵΪ��%d\n", n);
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);
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


//int* arr1[6]; //����ָ�������
//char* arr2[8]; //һ���ַ�ָ�������
//char** arr3[7];//�����ַ�ָ�������

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