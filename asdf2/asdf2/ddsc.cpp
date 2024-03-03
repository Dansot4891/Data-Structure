#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {

	float in_fondo;
	float rst;
	
	printf("화씨 온도를 입력해주세요. : ");
	scanf("%f", &in_fondo);
	rst = (in_fondo - 32.0) * 5.0 / 9.0;
	printf("섭씨는 %f ", rst);
}
