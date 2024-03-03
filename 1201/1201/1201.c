#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>

struct student {
	int num;
	char name[20];
	double grade;
};

union ex {
	char ch;
	int i;
};

enum d{MON,TUE,WED,THU,FRI,SAT,SUN };
//      0   1   2   3   4   5   6
// 만약 2대신에 10을 대입하면 for문에서 10후에 다음 수인 11이 나온다.

typedef struct point {
	int x;
	int y;
}POINT;
POINT clas(POINT a, POINT b) {
	POINT rst;
	rst.x = a.x + b.x;
	rst.y = a.y + b.y;
	return rst;
}

void compare(struct student s1, struct student s2) {
	if (strcmp(s1.name, s2.name) == 0) {
		printf("같은 학생입니다.");
	}
	else {
		printf("다른 학생입니다.");
	}
}

struct student read() {
	struct student s;
	printf("학번 이름 나이 : ");
	scanf("%d", &s.num);
	scanf("%s", &s.name);
	scanf("%lf", &s.grade);
	return s;
}
void main() {
	//포인터와 구조체
	/*
	struct student s1 = { 2022,"lim",4.3 };
	struct student* p;

	p = &s1;

	printf("num = %d, name = %s, grade = %lf\n", s1.num, s1.name, s1.grade);
	printf("num = %d, name = %s, grade = %lf\n", p->num, p->name, p->grade);
	printf("num = %d, name = %s, grade = %lf\n", (*p).num, (*p).name, (*p).grade);
	*/

	//공용체
	/*
	union ex abc;
	abc.ch = 'A'; //A = 65
	printf("%c  %d\n", abc.ch,abc.i);

	abc.i = 100;
	printf("%c  %d\n", abc.ch,abc.i);
	*/
	
	//enum 열거형
	/*
	enum day d;
	int ins[7] = { 10,20,30,40,50,60,70 };
	char *ch[7] = {"abc", "bcd", "cde", "def", "efg", "fgh", "ghi"};
	//char ch[7][7] = {"abc", "bcd", "cde", "def", "efg", "fgh", "ghi"};
	for (d = MON; d <= SUN; d++) {
		//printf("%d -> %d \n",d,ins[d]);
		printf("%d -> %s \n", d, ch[d]);
	}
	*/

	//typedef
	/*
	//POINT p1 = { 2,3 };
	POINT p,delta;
	POINT rst;
	p.x = 2;
	p.y = 3;
	delta.x = 10;
	delta.y = 10;
	rst = clas(p, delta);
	printf("(%d,%d) + (%d,%d) = (%d,%d)\n", p.x, p.y, delta.x, delta.y, rst.x, rst.y);
	*/

	//구조체 비교
	/*구조체를 비교할 때는 구조체가 같은지를 보는게 아니라,
	각 구조체의 멤버변수를 비교하여 멤버 변수가 같은지를 확인한다.*/
	/*
	struct student s1,s2;
	
	s1 = read();
	s2 = read();
	compare(s1, s2);
	*/
}