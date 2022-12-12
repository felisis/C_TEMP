//BITCODE Ex242
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>


int main(void) {
	int n, count = 0;
	int i = 1;

	printf("enter num");
	scanf("%d", &n);
	while (i > 0) {
		if (i > 0) {
			for (int j = 1; j <= i; j++)
				printf("*");
			if (count % 2 == 0) i++;
			else i--;
			printf("\n");
		}

		if (i == 5 & count <= 2) count++;
		else if (i == 3 & count == 1) count++;
		
	}
}
