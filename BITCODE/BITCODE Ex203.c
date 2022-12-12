//BITCODE Ex203
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

int swap1(int num, double i, double j) {
	//num =1241
	int n = 1, m = 1;
	
	if (j > i) {
		int temp = i;
		int i = j;
		int j = temp;

		for (int count = 1; count < i; n *= 10, count++);
		for (int count = 1; count < j; m *= 10, count++);

		if (num < n | num < m) {
			printf("실패");
		}
		else {
			int N = (num % (n * 10)) / n;
			int M = (num % (m * 10)) / m;
			printf("%d\n", num - N * n + N * m - M * m + M * n);
		}

	}
	else {
		/*for (int count = 1; count < i; n *= 10, count++);
		for (int count = 1; count < j; m *= 10, count++);*/

		if (num < pow(10,i-1) | num < pow(10,j-1)) {
			printf("실패");
		}
		else {
			int w = pow(10, i-1);
			int y = pow(10, j-1);
			int N = (num % (w*10)) / w;
			int M = (num % (y*10)) / y;
			printf("%d\n", num - N * w + N * y - M * y + M * w);
		}
	}
}
int main(void) {
	int num = 0, i = 0, j = 0;
	printf("Num >> ");
	scanf("%d %d %d", &num, &i, &j);
	swap1(num, i, j);
}