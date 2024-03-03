#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main() {
	//윤년판단
	/*
	int x;
	printf("연도를 입력하시오. : ");
	scanf("%d", &x);

	if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0) {
		printf("%d년은 윤년입니다.", x);
	}
	else {
		printf("%d년은 윤년이 아닙니다.", x);
	}
	*/

	//동전 던지기
	/*
	int coin = rand();
	if (coin %2==0) {
		printf("앞면입니다.");
	}
	else {
		printf("뒷면입니다.");
	}
	*/

	//large small
	/*
	int n;
	printf("n : ");
	scanf("%d", &n);

	if (n >= 100) {
		printf("Large");
	}
	else if (n < 100) {
		printf("Small");
	}
	*/

	//학점
	/*
	int x;
	char a;
	printf("성적을 입력하시오. : ");
	scanf("%d", &x);

	if (x >= 90) {
		a = 'A';
	}else if (x >= 80) {
		a = 'B';
	}
	else if (x >= 70) {
		a = 'C';
	}
	else if (x >= 60) {
		a = 'D';
	}
	else if (x >= 50) {
		a = 'E';
	}
	else {
		a = 'F';
	}
	printf("학점 %c", a);
	*/

	//계산기
	/*
	int x, y;
	char c;

	printf("수식을 입력하시오. : ");
	scanf("%d %c %d", &x, &c, &y);

	if (c == '+') {
		printf("%d",x + y);
	}
	else if (c == '-') {
		printf("%d", x - y);
	}
	else if (c == '*') {
		printf("%d", x * y);
	}
	else if (c == '/') {
		printf("%d", x / y);
	}
	else {
		printf("지원되지 않는 연산자입니다.");
	}
	*/

	//세 개의 정수 중 큰 수 찾기
	/*
	int x, y, z;
	printf("3개의 정수를 입력하시오. : ");
	scanf("%d %d %d", &x, &y, &z);

	if (x > y && x > z) {
		printf("가장 큰 정수는 %d이다.", x);
	}
	else if (y > x && y > z) {
		printf("가장 큰 정수는 %d이다.", y);
	}
	else if (z > y && z > x) {
		printf("가장 큰 정수는 %d이다.", z);
	}
	else {
		printf("크기가 똑같은 수가 있습니다.");
	}
	*/

	//HW 4장 중간점검 2번문제
	/*
	int size;
	printf("컵의 사이즈 : ");
	scanf("%d", &size);

	if (size < 100) {
		printf("Small");
	}
	else if (size >= 100 && size < 200) {
		printf("Medium");
	}
	else if (size >= 200) {
		printf("Large");
	}
	else {
		printf("올바르지 않은 사이즈입니다.");
	}
	*/

	//switch
	/*	int score;
	char grade;

	printf("점수 : ");
	scanf("%d", &score);

	score = score / 10;

	switch (score) {
		case 10: case 9: grade = 'A';
		case
		 
	}
	*/

}