//BITCODE Ex093
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void main(void) {
	int age = 20;
	int year;
	printf("연도를 입력하세요 : ");
	scanf("%d", &year);
	printf("%d년 지수의 나이는 %d세입니다", year, age + (year - 2017));
}