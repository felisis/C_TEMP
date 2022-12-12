//BITCODE Ex296
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
	int arr1[] = { 1,5,2,4 };
	int arr2[] = { 3,1,1 };
	int len1 = sizeof(arr1) / sizeof(arr1[0]);
	int len2 = sizeof(arr2) / sizeof(arr2[0]);
	int result = sum_arr(arr1, arr2, len1, len2);
	printf("%d", result);
}