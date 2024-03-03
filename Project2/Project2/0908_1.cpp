#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define rate 1120.5
#define years 30

void main() {
	int a;
	float b;
	//double du_a = 0;
	printf("달러화 금액을 입력해주세요.");
	scanf_s("%d", &a); //scanf("%lf",du_a);

	b = a * rate;
	printf("달러화 %d달러는 %f원입니다.", a, b);
}