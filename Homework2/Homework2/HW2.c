#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int year, month, days;

	printf("일수를 알고 싶은 해를 입력하시오.");
	scanf("%d", &year);

	printf("일수를 알고 싶은 달을 입력하시오.");
	scanf("%d", &month);

	switch (month) {
	case 1:	case 3:	case 5:	case 7:	case 8:	case 10: case 11:
		days = 31;
		printf("%d년 %d월의 일수는 %d입니다.", year, month, days);
		break;

	case 4:	case 6:	case 9: case 12:
		days = 30;
		printf("%d년 %d월의 일수는 %d입니다.", year, month, days);
		break;

	case 2: if (year % 4 == 0) {
		days = 29;
		printf("%d년 %d월의 일수는 %d입니다.", year, month, days);
	}
		  else {
		days = 28;
		printf("%d년 %d월의 일수는 %d입니다.", year, month, days);
		break;
	default:
		printf("올바르지 않은 달을 입력하셨습니다.");
		break;
		}

	}
}