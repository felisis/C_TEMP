//BITCODE Ex030
#include<stdio.h>

void main(void) {
	int a = 1; 
	printf("%d \n", a++); // 1
	printf("%d \n", a + (++a)); //6
	printf("%d \n", a++ + ++a * a); // 20
}