//BITCODE Ex257
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

int is_bitnum(int x) {
	int sum = 0, temp = x;
	while (temp != 0) {
		sum += temp % 10;
		temp /= 10;
	}
	return (x % sum == 0) ? true : false;
}
int main(void) {
	int x;
	scanf("%d", &x);
	printf("%s",is_bitnum(x) == 1? "true":"false");
}