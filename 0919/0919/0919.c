#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define cal_bun 60

void main() {
	/*
	int res_rst, div_rst1, inval1, inval2;
	float div_rst2;
	printf("input Value1 : ");
	scanf("%d", &inval1);
	printf("input Value2 : ");
	scanf("%d", &inval2);

	res_rst = inval1 % inval2;
	div_rst1 = inval1 / inval2;
	div_rst2 = (float)inval1 / inval2; //명시적 형변환

	printf("나머지 연산자 실행 : %d\n나누기 실행(실수) : %.2f\n나누기 실행(정수) : %d",res_rst, div_rst2, div_rst1);
	*/
	/*
	int in_val;
	printf("Input Value1 : "); scanf("%d", &in_val);

	if ((in_val % 2) == 0) {
		printf("짝수입니다.");
	}
	else {
		printf("홀수입니다.");
	}
	*/
	/*
	int in_val;
	printf("Input Value1 : "); scanf("%d", &in_val);

	if ((in_val % 3) == 0) {
		if ((in_val % 5) == 0) {
			printf("3과 5의 배수입니다.");
		}
		else {
			printf("3의 배수가 입니다.");
		}
	}
	else if ((in_val % 5) == 0) {
		printf("5의 배수입니다.");
	}
	else {
		printf("3과 5의 배수가 아닙니다.");
	}
	*/
	/*
	int si, sec1, sec2, min;
	printf("초를 입력해주세요.(32억초 이하) : "); scanf("%d", &sec1);

	si = sec1 / cal_bun / cal_bun;
	min = (sec1-(si*cal_bun*cal_bun)) / cal_bun;
	sec2 = sec1 % cal_bun;

	printf("%d초는 %d시간 %d분 %d초입니다.", sec1, si, min,sec2);
	*/
	
}