#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��������ʹ����ȫ����λ��ż��ǰ�档
//
//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�


//����һ
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

//������

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
		// ��headָ��ż����tailָ������
		if (*head % 2 == 0 && *tail % 2 != 0 && head < tail)        //head < tail ����head��tailǰ��
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

