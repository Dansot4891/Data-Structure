#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {

	float in_fondo;
	float rst;
	
	printf("ȭ�� �µ��� �Է����ּ���. : ");
	scanf("%f", &in_fondo);
	rst = (in_fondo - 32.0) * 5.0 / 9.0;
	printf("������ %f ", rst);
}
