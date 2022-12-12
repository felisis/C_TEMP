//BITCODE Ex292
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

int print_reverse(int* arr, int len) {
	for (int i = len-1; i >= 0; i--) {
		printf("%d ", arr[i]);
	}
}
	


int main(void) {
	int arr[] = { 2,5,6,8,11 };
	printf("%d %d\n", sizeof(arr), sizeof(arr[0]));
	int array = print_reverse(arr, sizeof(arr)/sizeof(arr[0]));
}