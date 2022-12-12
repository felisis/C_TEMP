//BITCODE Ex210
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

void fun1(int* a) {
	printf("%d\n", a);
	(*a)++;
	printf("%d\n", a);
}
void fun2(int a) {
	(*(&a))++;
	printf("%d\n", a);
}

int main(void) {
	int a = 10;
	fun1(&a);
	fun2(&a);
	fun2(a);
	printf("%d", a);

}