#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define rate 1120.5
#define years 30

void main() {
	int a;
	float b;
	//double du_a = 0;
	printf("�޷�ȭ �ݾ��� �Է����ּ���.");
	scanf_s("%d", &a); //scanf("%lf",du_a);

	b = a * rate;
	printf("�޷�ȭ %d�޷��� %f���Դϴ�.", a, b);
}