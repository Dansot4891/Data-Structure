#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>

struct student {
	int number;
	char name[20];
	float grade;
};

struct student sread() {
	struct student s;
	printf("학번 : ");
	scanf("%d", &s.number);
	printf("이름 : ");
	scanf("%s", &s.name);
	printf("성적 : ");
	scanf("%f", &s.grade);
	return s;
}

struct point {
	int x;
	int y;
};

struct point pread() {
	struct point p;
	printf("x, y : ");
	scanf("%d %d", &p.x, &p.y);
	return p;
}

struct rect {
	struct point p1;
	struct point p2;
};

void main() {
	//student 구조체
	/*
	struct student s1;
	s1.number = 12345;
	s1.grade = 4.2;
	//s1.name[20] = "dsfa"; 이거 불가능함 strcpy로 넣어줘야함.
	strcpy(s1.name, "dafs");
	printf("number = %d, name = %s, grade = %f", s1.number, s1.name, s1.grade);
	*/

	//struct 함수
	/*
	struct student s1;

	s1 = sread();
	printf("number = %d, name = %s, grade = %f", s1.number, s1.name, s1.grade);
	*/

	//point 구조체 및 대입
	/*
	struct point p = { 1,2 };
	struct point q = { 2,1 };
	struct point r = p;

	printf("p.x = %d, p.y = %d\n", p.x, p.y);
	printf("r.x = %d, r.y = %d\n", r.x, r.y);
	r = q;
	printf("r.x = %d, r.y = %d\n", r.x, r.y);
	*/

	//math 함수 사용 및 과제
	/*
	struct point p1, p2;
	float xdif, ydif;
	float dist;

	p1 = pread();
	p2 = pread();
	
	xdif = p2.x - p1.x;
	ydif = p2.y - p1.y;

	dist = sqrt((xdif * xdif) + (ydif * ydif));
	printf("두점간 거리 : %.2f", dist);
	*/

	//
	/**/
	struct rect r;
	int w, h, area = 0, peri = 0;
	printf("r.x1, r.y1 : ");
	scanf("%d %d", &r.p1.x, &r.p1.y);

	printf("r.x2, r.y2 : ");
	scanf("%d %d", &r.p2.x, &r.p2.y);

	if (r.p2.x > r.p1.x) {
		w = r.p2.x - r.p1.x;
	}
	else {
		w = r.p1.x - r.p2.x;
	}
	
	if (r.p2.y > r.p1.y) {
		h = r.p2.y - r.p1.y;
	}
	else {
		h = r.p1.y - r.p2.y;
	
	}
	area = w * h;
	peri = 2 * w + 2 * h;
	printf("area = %d, peri = %d", area, peri);

}