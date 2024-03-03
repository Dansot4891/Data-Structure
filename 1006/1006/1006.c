#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main() {
	int n;
	int x = 1;

	printf("구하고싶은 구구단을 입력해주세요. : ");
	scanf("%d", &n);

	while (x <= 9)
		printf("%d X %d = %d", n, x, n * x);
		x++;


	//while로 마일을 미터로 변환하기
	/*
	int meter;
	int i = 0;

	while(1) {
		printf("미터를 구하고 싶은 마일을 입력해주세요. : ");
		scanf("%d", &i);
		if (i == 0)
			break;
		meter = i * 1609;
		printf("%d 마일은 %d미터입니다.\n", i, meter);
		i++;
	}
	*/


	//while로 sum과factorial 구하기
	/*
	int i = 1, sum = 0, fac = 1;
	
	while (i<10) {
		
		sum += i;
		fac *= i;
		i++;

		
	}
	printf("sum = %d\n", sum);
	printf("factorial = %d\n", fac);
	*/


	//과제 달과 년도 입력
	/*
	int year,month,days;

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
	*/
	

	//가위 바위 보
	/*
	int my, com;

	printf("게임 : 가위-0  바위-1  보-2\n");
	printf("사용자 입력 : "); scanf("%d", &my);
	printf("컴퓨터 입력 : ");
	com = rand() % 3;
	printf("%d \n", com);

	if ((my + 1) % 3 == com)
		printf("컴퓨터 승리\n");
	else if ((my + 1) % 3 == com)
		printf("비겼음 \n");
	else
		printf("사용자 승리 \n");
		*/
}