#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

//int main() {
//	char ch[] = {'h','e','l','l','o'};
//	int len = strlen(ch);
//	printf("len = %d\n", len);   
//	return 0;
//}
//int a;
//int main() {
//	char ch[20] = "abcd";
//	char ch2[] = "efg";
//	strcpy(ch, ch2);
//	printf("%s\n", ch);
//	printf("%d\n", sizeof(size_t));
//		return 0;
//		
//}

//int main() {
//	char ch[] = "abcdef";
//	char ch2[] = "hello";
//	strcat(ch, ch2);
//	printf("%s\n", ch);
//	return 0;
//}

//int main() {
//	char ch[] = "abc";
//	char ch2[] = "ahello";
//	int ret = strcmp(ch, ch2);
//	printf("%d\n", ret);
//	return 0;
//}

//int main() {
//	char ch[] = "abcdef";
//	char ch2[] = "de";
//	printf("%#x", 1234);
//	return 0;
//}

/* strtok example */
//int main()
//{
//    char str[] = "This is a book";
//    char* pch;
//    pch = strtok(str, " ");
//    while (pch != NULL)
//    {
//        printf("%s\n", pch);
//        pch = strtok(NULL, " ");
//    }
//    return 0;
//}

//int main() {
//	int arr[] = { 1,2,3,4 };
//	int arr2[] = { 5,6,7,8 };
//	memcpy(arr, arr2, sizeof(arr2));
//	for (int i = 0; i < 4; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//void my_bubble_sort(int* arr, size_t size) {
//	for (size_t i = 0; i < size - 1; i++) {
//		int flag = 0;
//		for (size_t j = 0; j < size - i - 1; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 1;
//			}
//		}
//		if (flag == 0) {
//			return;
//		}
//	}
//}
//
//int main() {
//	int arr[] = { 7,1,5,2,3,4 };
//	size_t size = sizeof(arr) / sizeof(arr[0]);
//	my_bubble_sort(arr, size);
//	for (size_t i = 0; i < size; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


size_t MyStrlen(const char* ch) {
	assert(ch != NULL);
	size_t len = 0;
	while (*ch != '\0') {
		len++;
		ch++;
	}
	return len;
}

//char* MyStrcpy(char* dest, const char* src) {
//	assert(dest != NULL);
//	assert(src != NULL);
//	//dest的空间要足够大
//	char* ptr = dest;
//	while (*src != '\0') {
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = '\0';
//	return ptr;
//}

//char* MyStrcat(char* dest, const char* src) {
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ptr = dest;
//	while (*dest != '\0') {
//		dest++;
//	}
//	while (*src != '\0') {
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = '\0';
//	return ptr;
//}

//int MyStrcmp(const char* str1, const char* str2) {
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	while (*str1 != '\0' && *str2 != '\0') {
//		if (*str1 > *str2) {
//			return 1;
//		}
//		else if (*str1 < *str2) {
//			return -1;
//		}
//		else {
//			str1++;
//			str2++;
//		}
//	}
//	if (*str1 > *str2) {
//		return 1;
//	}
//	else if (*str1 < *str2) {
//		return -1;
//	}
//	else {
//		return 0;
//	}
//}

//const char* MyStrstr(const char* str1, const char* str2) {
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	size_t str1_len = strlen(str1);
//	size_t str2_len = strlen(str2);
//	size_t i = 0;
//	size_t j = 0;
//	while (i < str1_len && j < str2_len) {
//		if (str1[i] != str2[j]) {
//			i = i - j + 1;
//			j = 0;
//		}
//		else {
//			i++;
//			j++;
//		}
//	}
//	if (j == str2_len) {
//		return &str1[i - j];
//	}
//	return NULL;
//}

//int main() {
//	char ch[100] = "abcde";
//	char ch2[] = "de";
//	printf("%p\n", ch);
//	printf("%p\n", MyStrstr(ch, ch2));
//	return 0;
//}

//int main() {
//	char ch[] = "This is a book";
//	char* ptr = strtok(ch, " ");;
//	while (ptr != NULL) {
//		printf("%s\n", ptr);
//		ptr = strtok(NULL, " ");
//	}
//	return 0;
//}
//int Add(int x, int y) {
//	return x + y;
//}
//int main() {
//	//typedef int (*Func)(int x, int y);
//	//Func padd = Add;
//	typedef int (*ptr)(int x, int y);
//	ptr pp = Add;
//	//int (*ptr)(int, int) = Add;
//	
//	printf("%d\n", pp(1, 2));
//	return 0;
//}

