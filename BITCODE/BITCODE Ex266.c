//BITCODE Ex266
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

int main(void) {
	int x,y,z,temp;
	char* px = &x;
	char* py = &y;
	char* pz = &z;
	printf("enter x>> ");
	scanf("%d", &x);
	printf("enter y>> ");
	scanf("%d", &y);
	printf("enter z>> ");
	scanf("%d", &z);
	temp = *px;	
	*px = *pz;
	*pz = *py;
	*py = temp;
	printf(">> %d %d %d", *px, *py, *pz);

}