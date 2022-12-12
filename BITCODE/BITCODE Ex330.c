//BITCODE Ex330
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

int main(void) {
	char* key = "klydhnszmarqgxcujbtvoeipfw*";
	char str[200];
	printf("Sentence >> ");
	gets_s(str, sizeof(str));

	int index;
	for (int i = 0; str[i]; i++) {
		if (str[i] == ' ') index = strlen(key) - 1;
		else if (str[i] <= 'Z') {
			index = str[i] - 'A';
		}
		else {
			index = str[i] - 'a';
		}
		printf("%c", key[index]);
	}
}