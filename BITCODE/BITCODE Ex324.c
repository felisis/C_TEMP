//BITCODE Ex324
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

int main(void) {
	char s1[30] = "BITCODING THE BEST";
	char* ptr = strtok(s1, " ");
	while (ptr != NULL) {
		printf("%s\n", ptr);
		ptr = strtok(NULL, " ");
	}
}