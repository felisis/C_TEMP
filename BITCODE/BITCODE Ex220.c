//BITCODE Ex220
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

char str[20] = "global";
void function(void) {
	printf("%s\n", str);
}

int main(void) {
	printf("%s\n", str);
	char str[20] = "local";
	printf("%s\n", str);
	function();
}