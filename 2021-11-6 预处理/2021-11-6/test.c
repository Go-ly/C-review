#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//写一个宏，可以将一个整数的二进制位的奇数位和偶数位交换

//#define SWAP(n) (((n & 0xaaaaaaaa) >> 1) | ((n & 0x55555555) << 1))
//int main() {
//	int ret = SWAP(11);
//	printf("%d\n", ret);
//	return 0;
//}

// 预定义符号

//int main() {
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	return 0;
//}
//#define SIZE 10 
//int main() {
//	int arr[SIZE] = { 0 };
//	return 0;
//}

//#define uint unsigned int
//int main() {
//	uint num = 5;
//	return 0;
//}
//#define and &&
//int main() {
//	int a = 0;
//	int b = 0;
//	if (a > 0 and b > 0) {
//		printf("hello");
//	}
//}

//#define ADD(x, y) x + y
//int main() {
//	int a = 5;
//	int b = 10;
//	printf("%d\n", ADD(a, b));
//	return 0;
//}
#define TEST 1
#if TEST
int main() {
	
	return 0;
}
#endif