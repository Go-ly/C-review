#define _CRT_SECURE_NO_WARNINGS 1

//һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
//��дһ�������ҳ�������ֻ����һ�ε����֡�

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