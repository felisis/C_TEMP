//BITCODE Ex260
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>
#define SUB(x,y) (x*y)+(x*y)

int main(void) {
	int x, y;
	for (x = 1; x <= 9; x++) {
		for (y = 1; y <= 9; y++) {
			if (((x * 10) + y) + (x + (10 * y)) == 77) {
				printf("%d %d\n", x, y);

}
		/*	SUB(x,y) == 77;
			printf("%d %d", x, y);*/
		}
	}
}