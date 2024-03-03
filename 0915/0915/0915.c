#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	/*
	int sel;
	float in_fondo;
	float rst;
	float in_sondo;
	float rrst;

	printf("1. 화씨 -> 섭씨\n");
	printf("2. 섭씨 -> 화씨\n");

	scanf("%d", &sel);

	if (sel == 1) {
		printf("화씨 온도를 입력해주세요. : ");
		scanf("%f", &in_fondo);
		rst = (in_fondo - 32.0) * 5.0 / 9.0;
		printf("화씨는 %.2f, 섭씨는 %.2f \n", in_fondo, rst);
	}
	else if (sel == 2) {
		printf("섭씨 온도를 입력해주세요. : ");
		scanf("%f", &in_sondo);
		rrst = (9.0 / 5.0 * in_sondo) + 32.0;
		printf("섭씨는 %.2f, 화씨는 %.2f \n", in_sondo, rrst);
	}
	else {
		printf("오류입니다. 다시 시도해주세요.");
	}
	*/
	/*
	char ch;


	printf("문자 입력 : ");
	scanf("%c", &ch);
	
	printf("입력하신 문자는 %c이고 숫자로는 %d입니다.", ch, ch);
	*/ //ASCII 코드
	/*
	id, pass;

	printf("ID ____\b\b\b\b");
	scanf("%d", &id);
	*/
	/*
	//getchar() <==> putchar()

	char ch;
	ch = getchar();
	//printf("%c ==> %d", ch, ch);
	putchar(ch);
	*/
	/*
	char ch;
	while (1) //1 = true -> while 무한반복
	{
		ch = getchar();
		putchar(ch); //ctrl + c = 강제종료
		if (ch == 'z')
			break;
	}*/
	int idata;

	while ((idata = getchar()) != EOF) {//eof = end of file -> 파일의 끝을나타냄(마지막줄) ppt에 있는 옆 코드 while문[putchar(getchar)]와 똑같음.
		putchar(idata);
	}
}