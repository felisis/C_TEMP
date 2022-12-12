//BITCODE Ex244
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>


int main(void){
	int x, y, z, count = 0;
	for (x = 1; x < 100; x++) {
		for (y = 1; y < 100; y++) {
			for (z = 1; z < 100; z++) {
				if (x*x + y*y == z*z) {
					count++;
						printf("(%2d , %2d , %2d)\n", x, y, z);
				}
			}
		}
	}
	printf("%d", count);
}
