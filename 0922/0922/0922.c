#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	/*
	int m,c;
	printf("���� ������ �ִ� �� : ");
	scanf("%d", &m);
	
	printf("ĵ���� ���� : ");
	scanf("%d", &c);

	printf("�ִ�� �� �� �ִ� ĵ���� ���� = %d\n",m/c);
	printf("ĵ�� �ִ� ���� ���� �� ���� �� = %d\n",m%c);

	int r = m - c;
	printf("�Ž����� : %d\n", r);
	printf("100�� ������ ���� : %d\n",r/100);
	printf("10�� ������ ���� : %d\n",(r%100)/10);
	printf("1�� ������ ���� : %d", r % 10);
*/
	/*
	int x = 10, y = 10;
	printf("x = %d   y = %d\n", x, y);

	x += 1;
	printf("(x += 1)���� x = %d\n", x);

	y *= 2;
	printf("(y *= 1)���� y = %d\n", y);
*/
	int a = 60, b = 50, c = 40, d = 30, e = 20,f = 10;
	int y = a % b / c + d * (e - f);

	printf("y = %d",y);
}