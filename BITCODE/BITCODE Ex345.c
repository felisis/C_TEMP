//BITCODE Ex345
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>

//2차원 배열을 함수에서 리턴하려는 경우 int(*function(input))[행길이];
// *arr[10] >> 10개의 포인터를 저장할수 있는 포인터배열
// (*arr)[10] >> 10개의 요소를 가진 배열의 주소를 저장하는 포인터

int(*function(void))[4]{
	static int a[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
return a;
}

int main(void) {
	int(*arr)[4] = function();
}