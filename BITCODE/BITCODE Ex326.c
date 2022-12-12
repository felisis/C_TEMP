//BITCODE Ex326
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

int main(void) {
	int arr[5][5];
	int max = 0;
	for (int i = 0; i < 5; i++) {
		printf("%d행 입력 >> ", i + 1);
		for (int j = 0; j < 5; j++) {			
			scanf("%d", (arr[i]+j));
		}
	}
	
	
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (arr[i][j] > max) {
				max = arr[i][j];
			}
		}
	}
	printf("%d", max);
}