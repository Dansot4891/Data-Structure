#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	/*
	int m,c;
	printf("현재 가지고 있는 돈 : ");
	scanf("%d", &m);
	
	printf("캔디의 가격 : ");
	scanf("%d", &c);

	printf("최대로 살 수 있는 캔디의 개수 = %d\n",m/c);
	printf("캔디 최대 개수 구입 후 남은 돈 = %d\n",m%c);

	int r = m - c;
	printf("거스름돈 : %d\n", r);
	printf("100원 동전의 개수 : %d\n",r/100);
	printf("10원 동전의 개수 : %d\n",(r%100)/10);
	printf("1원 동전의 개수 : %d", r % 10);
*/
	/*
	int x = 10, y = 10;
	printf("x = %d   y = %d\n", x, y);

	x += 1;
	printf("(x += 1)이후 x = %d\n", x);

	y *= 2;
	printf("(y *= 1)이후 y = %d\n", y);
*/
	int a = 60, b = 50, c = 40, d = 30, e = 20,f = 10;
	int y = a % b / c + d * (e - f);

	printf("y = %d",y);
}