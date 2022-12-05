//BITCODE Ex120
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void main(void) {
	int year;
	scanf("%d", &year);
	if (year % 400 == 0) {
		printf("%d는 윤년", year);
	}
	else if (year % 100 == 0) {
		printf("%d는 평년", year);
	}
	else if (year % 4 == 0) {
		printf("%d는 윤년", year);
	}
	else {
		printf("%d는 평년", year);
	}
}
