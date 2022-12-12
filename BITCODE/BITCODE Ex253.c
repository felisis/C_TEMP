//BITCODE Ex253
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
#include<math.h>


int main(void) {
	int x, y, day = 0;
	printf("x >>");
	scanf("%d", &x);
	printf("y >>");
	scanf("%d", &y);

	for (int i = 1; i <= x - 1; i++) {

		if (i == 2) {
			day += 28;
		}
		else if (i == 4 | i == 6 | i == 9 | i == 11) {
			day += 30;
		}
		else {
			day += 31;
		}
	}

	day += y;
	int d_day = day % 7;
	switch (d_day) {
	case 1:
		printf("월요일");
		break;
	case 2:
		printf("화요일");
		break;
	case 3:
		printf("수요일");
		break;
	case 4:
		printf("목요일");
		break;
	case 5:
		printf("금요일");
		break;
	case 6:
		printf("토요일");
		break;
	case 0:
		printf("일요일");
		break;
	default:
		printf("날짜오류");
	}

}