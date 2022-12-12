//BITCODE Ex207
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

void print_str(char* str) {
	printf("%s \n", str);
}
char* str_2(char* str) {
	++str;
	return ++str;
}

int main(void) {
	char* str = "ABCDEFG";
	print_str(str);
	printf("%s", str_2(str));
}