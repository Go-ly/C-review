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


//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列

//void get_num(int num)
//{
//	for (int i = 0; i < 32; i+= 2)   //奇数
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

//写一个函数返回参数二进制中 1 的个数。
//比如： 15    0000 1111    4 个 1
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

//不允许创建临时变量，交换两个整数的内容

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

//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//arr是一个整形一维数组
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


//写一个函数，可以逆序一个字符串的内容
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

//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222


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


//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。


//void get_sp_num(int num)
//{
//	
//	for (int i = 0; i <= num; i++)
//	{	
//		int count = 0;    //用count来表示这是一个几位数
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
//	int num = 100000;  //用num来表示上限
//	get_sp_num(num);
//	return 0;
//}


//用C语言在屏幕上输出以下图案：(菱形)


//int main()
//{
//	int num = 13;
//	
//	for (int row = 1; row <= num / 2; row++)
//	{
//		// 打印空格
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
//	// 判断行数是奇数还是偶数
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
//		// 打印空格
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


//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。

int main()
{
	int money = 20;
	int num = 2 * money - 1;
	printf("%d\n", num);
	return 0;
}