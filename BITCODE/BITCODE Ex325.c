//BITCODE Ex325
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

int main(void) {
	int arr[5] = { 0,0,0,0,0 }, brr[5] = { 0,0,0,0,0 };
	int merge_arr[2][5];

	printf("배열 1 :");
	for (int i = 0; i < 5; i++) 
		scanf("%d", arr+i);
	for (int j = 0; j < 5; j++) 
		scanf("%d", brr+j);

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == 0) 
				merge_arr[i][j] = arr[j];
			else 
				merge_arr[i][j] = brr[j];
		}
	}
	printf("합친배열 >> \n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d", merge_arr[i][j]);
		}
		printf("\n");
	}
}