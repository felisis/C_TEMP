//BITCODE Ex173
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(void) {
	int cur = 2;
	int is;
	for (cur = 1; cur < 10; cur++) {
		if (cur % 2 != 0)
			continue;
		for (is = 1; is < 10; is++) {
			if (cur < is)
				break;
			printf("%d x %d = %d \n", cur, is, cur * is);
		}
		printf("\n");
	}
}