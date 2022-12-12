//BITCODE Ex218
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

void fun_recurring(double n) {
	char str[100];
	sprintf(str, "%.30lf", 1 / (double)n);

	char temp[100] = ""; int index = 0;
	for (int i = 0; i <= 100; i++) {
		temp[i] = str[2 + i];
		bool is_recur = true;
		for (int j = 0; j <= i; j++) {
			if (temp[j] != str[3 + i + j])
				is_recur = false;
		}
		if (is_recur) {
			printf("%s\n", temp);
			return;
		}
	}
	printf("0\n");
}

int main(void) {
	int n;
	scanf("%d", &n);
	fun_recurring(n);

}