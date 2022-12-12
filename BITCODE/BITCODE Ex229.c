//BITCODE Ex229
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

int num = 1;
int fun1(int num) {
	static int n = 1;
	n += num;
	return n;
}
int fun2(int n) {
	static int num = 1;
	return n * num++;
}
int main(void) {
	int num = 1;
	num += fun1(num);
	num += fun2(num);
	printf("%d", num);//6
}