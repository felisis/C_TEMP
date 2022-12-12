//BITCODE Ex265
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

int main(void) {
	int num, count = 0;
	bool val = true;
	scanf("%d", &num);
	while (val) {
		if (num % 2 == 0) {
			if (num == 1 | count > 100) {
				val = false;
				break;
			}
			num /= 2;
			count++;
			printf("%d , count == %d\n", num , count);
		
		}
		else if (num % 2 != 0) {
			if (num == 1 | count > 100) {
				val = false;
				break;
			}
			num = num * 3 - 1;
			count++;
			printf("%d , count == %d\n", num, count);
		}
	}

}