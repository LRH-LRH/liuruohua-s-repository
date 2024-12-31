#define _CRT_SECURE_N0_WARNINGS
#include<stdio.h>
#include<string.h>
int my_match(char* a, char* b, int start) {
	int i = start, j = 0, m = strlen(a), n = strlen(b);
	if (n<0 || start + n>m)return -1;
	while (i < m && j < n) {
		if (a[i] == b[j]) {
			i++;
			j++;
		}
		else {
			i = i - j + 1;
			j = 0;
		}
	}
		if (j >= n)return (i - n);
		else return -1;
	
}
int main() {
	char a[100];
	char b[100];
	fgets(a, 100, stdin);
	fgets(b, 100, stdin);
	a[strcspn(a, "\n")] = '\0';
	b[strcspn(b, "\n")] = '\0';
	int pos = 0;
	int result;
	while ((result = my_match(a, b, pos) )!= -1) {
		printf("%d\n", result);
		pos = result + 1;
	}if (pos==0)
		printf("-1\n");
	return 0;
}