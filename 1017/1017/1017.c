#define _CRT_SECURE_NO_WARNINGS
#include "abc.h"

void main() {
	//continue 이용해 짝수값만 출력하기
	/*
	for (int i = 0; i <= 10; i++) {
		if (i % 2 != 0) {
			continue;
		}printf("정수 : %d\n",i);
	}
	*/


	//헤더파일 이용
	/*
	int i, ans, x, y;

	srand(time(NULL));
	
	printf("출제합니다. \n");

	while (1) {
		x = rand() % Max;
		y = rand() % Max;
		printf("%d + %d = ", x, y);
		scanf("%d", ans);
		if (x + y == ans) {
			printf("딩동댕!\n");
			break;
		}
		else {
			printf("떙!\n");
		}
	}
	*/


	//사각형 넓이 구하기
	/*
	int width, area2;
	width = set_a();
	area2 = height * width;
	printf("넓이 : %d\n", area2);
	int area_1 = area();

	printf("넓이 : %d\n",area_1);
	*/



}