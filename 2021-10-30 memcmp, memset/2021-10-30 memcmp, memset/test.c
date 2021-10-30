#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>

// memcmp
//int my_memcmp(const void* ptr1, const void* ptr2, size_t num) {
//	assert(ptr1 != NULL);
//	assert(ptr2 != NULL);
//	assert(num != 0);
//	char* pptr1 = (char*)ptr1;
//	char* pptr2 = (char*)ptr2;
//	int i = 0;
//	while (num > 0) {
//		if (pptr1[i] > pptr2[i]) {
//			return 1;
//		}
//		else if (pptr1[i] < pptr2[i]) {
//			return -1;
//		}
//		else {
//			i++;
//			num--;
//		}
//	}
//	return 0;
//}
//int main() {
//	char ch[] = "abcdef";
//	char ch2[] = "abcde";
//	printf("%d\n", my_memcmp(ch, ch2, sizeof(ch)));
//	return 0;
//}

//memset
void* my_memset(void* ptr, int val, size_t num) {
	assert(ptr != NULL);
	assert(num != 0);
	char* pptr = (char*)ptr;
	int i = 0;
	while (num) {
		pptr[i] = val;
		num--;
		i++;
	}
	return ptr;
}

//int main()
//{
//	char str[] = "almost every programmer should know memset!";
//	my_memset(str, '3', 6);
//	printf("%s\n", str);
//	return 0;
//

//int main() {
//	char ch[] = "abcde";
//	char ch2[] = "aaabce";
//	int ret = memcmp(ch, ch2, 2);
//	printf("ret = %d\n", ret);
//	return 0;
//}

