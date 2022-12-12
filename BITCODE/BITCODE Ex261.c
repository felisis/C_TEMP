//BITCODE Ex261
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>
#define SUB(x,y) (x*y)+(x*y)

int main(void) {
	char str[100];
	int count = 1;
	printf("enter >> ");
	gets(str);

	for (int i = 0; i <= strlen(str); i++) {
		if (str[i] == ' ') {
			count++;
		}
	}
	printf("%d", count);
}