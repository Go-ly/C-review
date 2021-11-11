#include <stdio.h>
#include <assert.h>
int BF(const char* ch1, const char* ch2) {
	assert(ch1 != NULL);
	assert(ch2 != NULL);
	int i = 0;
	int j = 0;
	while (ch1[i] != '\0' && ch2[j] != '\0') {
		if (ch1[i] == ch2[j]) {
			i++;
			j++;
		}
		else {
			i = i - j + 1;
			j = 0;
		}
	}
	if (ch2[j] == '\0') {
		return i - j;
	}
	return -1;
}
int main() {
	char ch1[] = "abcde";
	char ch2[] = "e";
	int pos = BF(ch1, ch2);
	printf("%d\n", pos);
	return 0;
}