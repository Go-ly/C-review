#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
//int main()
//{
//    int num1 = 0;
//    int num2 = 0;
//    int count = 0;
//    int i = 32;
//    scanf("%d %d", &num1, &num2);
//    while (i)
//    {
//        if (num1 % 2 != num2 % 2)
//        {
//            count++;
//        }   
//        num1 = num1 / 2;
//        num2 = num2 / 2;
//        i--;
//    }
//    printf("%d\n", count);
//    return 0;
//}


//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������

//void get_num(int num)
//{
//	for (int i = 0; i < 32; i+= 2)   //����
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	for (int i = 1; i < 32; i += 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//}
//int main()
//{
//
//	int num = 20;
//	get_num(num);
//	return 0;
//}

//дһ���������ز����������� 1 �ĸ�����
//���磺 15    0000 1111    4 �� 1
//int bin_num(int num)
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if ((num >> i) & 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int num = 15;
//	printf("%d\n", bin_num(num));
//	return 0;
//}

//����������ʱ������������������������

//int main()
//{
//	int a = 1;
//	int b = 2;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a == %d\n", a);
//	printf("b == %d\n", b);
//	return 0;
//}

//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
//arr��һ������һά����
//void ptr_print(int* ptr, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d ", ptr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	ptr_print(arr, size);
//	return 0;
//}


//дһ����������������һ���ַ���������
//void reverse_str(char* str)
//{
//	int len = strlen(str);
//	while (len >= 2)
//	{
//		char temp = ' ';
//		temp = *str;
//		*str = *(str + len - 1);
//		*(str + len - 1) = temp;
//		str++;
//		len = len - 2;
//	}
//}
//int main()
//{
//	char str[] = "abcdef";
//	reverse_str(str);
//	printf("%s", str);
//	return 0;
//}

//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222


//int main()
//{
//	int sum = 0;
//	int num = 2;
//	int tmp = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		tmp = tmp * 10 + num;
//		sum = sum + tmp;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ��������� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������


//void get_sp_num(int num)
//{
//	
//	for (int i = 0; i <= num; i++)
//	{	
//		int count = 0;    //��count����ʾ����һ����λ��
//		int j = i;
//		int number = i;
//		while (j)
//		{
//			count++;
//			j = j / 10;
//		}
//		int sum = 0;
//		while (number)
//		{
//			int tmp = number % 10;
//			
//			sum = sum + (int)pow(tmp, count);
//			number = number / 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//}
//int main()
//{
//	int num = 100000;  //��num����ʾ����
//	get_sp_num(num);
//	return 0;
//}


//��C��������Ļ���������ͼ����(����)


//int main()
//{
//	int num = 13;
//	
//	for (int row = 1; row <= num / 2; row++)
//	{
//		// ��ӡ�ո�
//		for (int i = num / 2; i >= row; i--)
//		{
//			printf(" ");
//		}
//		for (int spc = 1; spc <= 2 * row - 1 ; spc++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	// �ж���������������ż��
//	int tmp = num;
//	if (tmp % 2 != 0)
//	{
//		while (tmp--)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	for (int row = 1; row <= num / 2; row++)
//	{
//		// ��ӡ�ո�
//		for (int i = 1; i <= row; i++)
//		{
//			printf(" ");
//		}
//		for (int spc = 1; spc <= num - 2 * row; spc++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���

int main()
{
	int money = 20;
	int num = 2 * money - 1;
	printf("%d\n", num);
	return 0;
}