#define _CRT_SECURE_NO_WARNINGS 1

//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//编写一个函数找出这两个只出现一次的数字。

#include <stdio.h>
int main() {
	int arr[] = { 1,2,3,4,2,3,3 };
	int size = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < size; i++) {
		int j = 0;
		for (; j < size; j++) {
			if (j == i) {
				continue;
			}
			if (arr[i] == arr[j]) {
				break;
			}
		}
		if (j >= size) {
			printf("%d\n", arr[i]);
		}
	}
	return 0;
}