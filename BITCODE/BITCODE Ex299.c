//BITCODE Ex299
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>
int func(int* arr, int n1) {
	int temp = 0;
	int count = 0;
	for (int i = 0; i < n1; i++) {
		if (arr[i] == 1) {
			temp = arr[0];
			arr[0] = arr[i];
			arr[i] = temp;
			count++;
			return arr[0];
		}
		else if (arr[i] != 1) {
			continue;
		}

	}
	if (count == 0) {
		return -1;
	}
}

int main(void) {
	int arr[] = { 2,4,3,5 };
	int len1 = sizeof(arr) / sizeof(arr[0]);
	
	printf("%s", func(arr, len1)==1? "True": "false");
}