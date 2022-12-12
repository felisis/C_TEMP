//BITCODE Ex289
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

int main(void) {
	int arr1[4] = {1,2,3,4};
	int arr2[4] = {8,7,6,5};
	for (int i = 0; i <= 3; i++) {
		int arr3[4];
		arr3[i] = arr1[i] + arr2[i];
		printf("%d ", arr3[i]);
	}

}