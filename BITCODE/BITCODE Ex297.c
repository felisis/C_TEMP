//BITCODE Ex297
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>
int sum_arr(int* arr1, int* arr2, int n1, int n2) {// 4,3
	int sum = 0;
	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < n2; j++) {
			if (arr1[i] > arr2[j]) {
				sum += arr2[j];
			}
		}
	}
	return sum;
}

int main(void) {
	int arr1[5] = { 1,2,3,4,5 };
	int * p = arr1;
	for (int i = 0; i < 5; i++) {
		
		 arr1[i] = *(p + i) * 2;
		printf("%d ", arr1[i] );
	}
}