//BITCODE Ex290
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

int main(void) {
	int sum = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10; i++) {		
		sum+= arr[i];
	}
	printf("%d", sum);

}