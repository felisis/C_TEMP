//BITCODE Ex320
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

int fun_arr(int(*arr)[3], int col, int row) {
	int sum = 0;
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < col; j++) {

			if (i > arr[i][j]) {
				sum += arr[i][j] - i;

			}
			else
				sum -= i;
			printf("i >> %d, sum >> %d\n", i, sum);
		}
	}
	return sum;
}

int main(void) {
	int arr[][3] = {
		{1},
		{1,3,5},
		{2,7} };
	printf("%d", fun_arr(arr, 3, 3)); //8
}