//BITCODE Ex329
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

int main(void) {
	char str[100];
	printf(">>");
	scanf("%[^\n]s", str, sizeof(str));

	int count = 0, first = 0, i = 0;
	int ind = 0, len = 0;
	while (str[i]) {
		if (str[i] == ' ') {
			if (len < i - first) {
				len = i - first;
				ind = first;
			}
			first = i + 1;
		}
		i++;
	}
	if (len < i - first) {
		len = i - first; ind = first;
	}
	for (int j = ind; j < len + ind; j++) {
		printf("%c", str[j]);
	}
}