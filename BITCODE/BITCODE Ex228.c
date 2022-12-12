//BITCODE Ex228
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

int num = 1;
int fun1(int num) {
	num += num;
	return num;
}
int fun2(int n) {
	n += num;
	int num = 2;
	n += num;
	return n;
}
int main(void) {
	int num = 1;
	num += fun1(num);
	num += fun2(num);
	printf("%d", num);//9
	
}