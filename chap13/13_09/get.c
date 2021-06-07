#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int get() {
	int c;
	printf("숫자를 입력하세요>>");
	scanf("%d", &c);
	return c;
}