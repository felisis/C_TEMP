//BITCODE Ex316
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

int main(void) {
	int  arr[][3] = {
		{1,2},
		{3,4,5},
		{6}
	};
	int totalSize = sizeof(arr);
	int rowSize = sizeof(arr[0]);
	int rowLen = totalSize / rowSize;
	int colLen = rowSize / sizeof(arr[0][0]);

	for (int i = 0; i < colLen; i++) {
		for (int j = 0; j < rowLen; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}