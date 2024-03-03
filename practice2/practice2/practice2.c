#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
	int me,com;
	printf("가위바위보 게임(가위-0, 바위-1, 보-2)\n");
	printf("(가위-0, 바위-1, 보-2)선택하세요. : ");
	scanf("%d", &me);
	srand(time(NULL));
	com = rand() % 3;
	printf("나 : %d\n", me);
	printf("컴퓨터 : %d\n",com);
	if (com == me) {
		printf("무승부");
	}
	else if ((me == 0 && com == 1) || (me == 1 && com == 2) || (me == 2 && com == 0)) {
		printf("com 승리");
	}
	else {
		printf("사용자 승리");
	}
}