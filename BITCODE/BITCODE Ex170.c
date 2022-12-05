//BITCODE Ex170
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(void) {
	int num = 2;
	if (num == 1) goto ONE;
	else if (num == 2) goto TWO;
	else goto FINISH;

ONE:printf("1\n");
	goto FINISH;
TWO: printf("2\n");
	goto FINISH;
FINISH: printf("FINISH");
}