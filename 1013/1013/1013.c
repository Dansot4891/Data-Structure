#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void printstar(int x) {
	printf("***********\n");
	for (int i = 1; i <= x; i++) {
		printf("*         *\n");
	}printf("***********\n");

}
void main() {
	int a;
	int sum = 0;

	while (1) {
		printf("(100입력시 종료) input : ");
		scanf("%d", &a);
		
		if (a < 0) {
			printf("양수를 입력해주세요.\n");
			continue;
		}if (a == 100) {
			break;
		}
		sum += a;
	}printf("합 : %d", sum);

	//중첩 구구단
	/*
	int n;
	printf("input : ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 9; j++) {
			printf("%d X %d = %d\n",i, j, i * j);
		}printf("\n");
	}
	*/

	//팩토리얼
	/*
	int x;
	printf("input : ");
	scanf("%d", &x);
	long fac = 1;
	
	for (int i = 1; i <= x; i++) {
		fac *= (long)i;
	}
	printf("%d! = %ld", x, fac);
	*/

	//별, 구구단 만들기
	/*
	int n,x;

	printf("구하고싶은 구구단의 수 입력 : ");
	scanf("%d", &n);

	for (int i = 1; i < 10; i++) {
		printf("%d X %d = %d\n", n, i, n * i);
	}
	printf("별의 층 수 : ");
	scanf("%d", &x);
	printstar(x);
	*/

	//숫자 맞추기, break
	/*
	int com, gue;
	int count = 0;
	srand(time(NULL));
	com = rand() % 50;
	
	while (1) {
		count++;
		printf("수를 입력해주세요. : ");
		scanf("%d", &gue);
		if (gue == com) {
			printf("정답입니다.");
			printf("시도한 회수 : %d", count);
			break;
		}
		else if (gue > com) {
			printf("더 작은 수를 입력해주세요.\n");
		}
		else {
			printf("더 큰 수를 입력해주세요.\n");
		}
	}
	*/


	//최대 공약수
	/*
	int x, y, r;
	printf("수를 입력해주세요. : (큰수) (작은수)");
	scanf("%d %d",&x,&y);
	
	while (y!=0) {
		r = x % y;
		x = y;
		y = r;
	}
	printf("최대 공약수 : %d", x);
	*/
}