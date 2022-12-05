//BITCODE Ex144
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(void) {
	int num;
	int sum = 0;
	printf("입력 : ");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		sum = sum + i;
	}
	printf("1부터 %d까지의 합은 : %d", num, sum);

}
