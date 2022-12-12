//BITCODE Ex195
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>

int gfunc(int g) {
	if (g >= 90) {
		printf("A");
	}
	else if (g >= 80 && g <= 90) {
		printf("B");
	}
	else if (g >= 70 && g <= 80) {
		printf("C");
	}
	else if (g >= 60 && g <= 70) {
		printf("D");
	}
	else {
		printf("E");
	}
}
int main(void) {
	int gra;
	printf("점수");
	scanf("%d", &gra);
	gfunc(gra);

}