#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define plus 1.06
#include <math.h>

void main() {
	//형 변환
	/*
	int i;
	float f;
	
	f = 5 / 4;
	printf("5/4 = %f\n", f);

	f = (float)5 / 4; // f = (float)5 / (float)4;
	printf("5/4 = %f\n", f);

	i = 3.5 + 4.6;
	printf("3.5 + 4.6 = %d\n", i);

	i = (int)3.5 + (int)4.6;
	printf("3.5 + 4.6 = %d\n", i);
*/
	
	//2차 함수 계산
	/*
	float x, y;
	printf("x : ");
	scanf("%f", &x);
	
	y = 3.0 * pow(x,2) + 7 * x + 9.0;
	printf("y = 3.0 *  + 7 * x + 9.0 = %f", y);
	*/

	//복리 계산
	/*
	double a,c,rate1;
	int m,b,rate;

	a = 24;
	
	printf("금액 : ");
	scanf("%d", &m);

	printf("년도 : ");
	scanf("%d", &b);

	printf("이율 : ");
	scanf("%d", &rate);

	rate1 = 1 + (double)rate / 100;

	c = a * pow(rate1, b);
	printf("%d년 후의 %d퍼센트 원리금 = %lf",b, rate, c);
	*/

	//if else문 배수찾기
	/*
	int a;

	printf("입력 : "); scanf("%d", &a);
	if (a % 3 == 0) {
		if (a % 5 == 0) {
			printf("3과 5의 배수입니다.");
		}
		else
		{
			printf("3의 배수입니다.");
		}
	}
	else {
		if (a % 5 == 0) {
			printf("5의 배수입니다.");
		}
		else
		{
			printf("3과 5의 배수가 아닙니다.");
		}
	}
	*/

	//영상 영하
	/*
	int a;
	printf("온도를 입력해주세요. : ");
	scanf("%d", &a);

	if (a > 0) {
		printf("영상의 날씨입니다.\n");
	}
	else if (a == 0) {
		printf("0도 입니다.\n");
	}
	else {
		printf("영하의 날씨입니다.\n");
	}
	printf("현재 온도는 %d입니다.\n",a);
	*/

	//조건 연산자
	/*
	int x, y, big;
	x = 10, y = 20;
	big = (x > y) ? x : y;
	printf("Big = %d", big);
	*/
}