#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void main() {
	//strcmp
	/*
	char str1[20];
	char str2[20];

	printf("input str1 : ");
	scanf("%s", &str1);

	printf("input str2 : ");
	scanf("%s", &str2);

	int rst = strcmp(str1, str2);

	if (rst > 0) {
		printf("%s가 %s보다 뒤에 있네요.\n",str1,str2);
	}
	else if (rst < 0) {
		printf("%s가 %s보다 앞에 있네요.\n",str1,str2);
	}
	else {
		printf("둘이 똑같아요.\n");
	}
	*/

	//과일 맞추기
	/*
	char s1[30] = "banana";
	char s2[30];
	int cnt = 0;

	while (1) {
		printf("좋아하는 과일 : ");
		scanf("%s", &s2);
		cnt++;
		if (strcmp(s1, s2) == 0) {
			printf("정답입니다. %d번 만에 성공하셨네요.",cnt);
			break;
		}
		else {
		}
	}*/


	//행맨 오류잇음 다시해볼것
	/*
	char sol[30] = "meet at midnight";
	char ans[30] = "____ __ ________";
	char ch;
	int i;

	while (1) {
		printf("\ninput : %s \n", ans);
		printf("추측해보세요 : ");
		ch = getch();
		for (i = 0; sol[i] != NULL; i++) {
			if (sol[i] == ch) {
				ans[i] == ch;
			}
		}
		if (strcmp(sol,ans) == 0) {break;}
	}
	*/
	/*
	char quiz[] = "meet at midnight";
	char ans[] = "____ __ ________";
	char a;
	while (1) {
		printf("문자열 : %s\n",ans);
		printf("글자 추측 : ");
		scanf("%c", &a);
		for (int i = 0; i < strlen(quiz); i++) {
			if (a == quiz[i]) {
				ans[i] = a;
			}
		}
		if (strcmp(quiz, ans) == 0) {
			printf("문자열 : %s\n", ans);
			printf("정답!");
			break;
		}
	}
	*/
	//단어 애나그램 게임
	/*
	char s1[20] = "apple";
	char s2[20],tmp;
	int i, len, p1, p2,cnt = 0;

	//int size = sizeof(str)/sizeof(str[1]);
	len = strlen(s1);

	for (i = 0; i < len; i++) {
		p1 = rand() % len;
		p2 = rand() % len;
		tmp = s1[p1];
		s1[p1] = s1[p2];
		s1[p2] = tmp;
	}

	do {
		cnt++;
		printf("%s 의 원단어는?\n", s1);
		scanf("%s", &s2);


	} while (strcmp("apple", s2) != 0);
	printf("%d번째 정답입니다.",cnt);
	*/
	/*
	char a[] = "watermelon";
	char a1[30];
	strcpy(a1, a);
	char b[30];
	int ct = 0;
	for (int i = 0; i < strlen(a); i++) {
		int r1 = rand() % strlen(a);
		int r2 = rand() % strlen(a);
		int tmp = a[r1];
		a[r1] = a[r2];
		a[r2] = tmp;
	}

	while (1) {
		ct++;
		printf("%s 애나그램 게임 : ", a);
		scanf("%s", &b);
		if (strcmp(a1, b) == 0) {
			printf("%s 정답 %d시도", b,ct);
			break;
		}
	}
	*/

	//문자열 정렬
	/*
	char menu[5][10] = {"kiwi","pineapple","apple","tomato","banana"};
	char tmp[20];
	
	printf("Before\n");
	for (int i = 0; i < 5; i++) {
		printf("%s ", menu[i]);
	}

	for (int i = 0; i < 5; i++) {//정렬
		for (int j = 0; j < 5; j++) {//교환
			if (strcmp(menu[j], menu[j + 1])>0) {
				strcpy(tmp, menu[j]);
				strcpy(menu[j], menu[j + 1]);
				strcpy(menu[j+1], tmp);
			}
		}
	}
	printf("\nAfter\n");
	for (int i = 0; i < 5; i++) {
		printf("%s ", menu[i]);
	}
	*/
	char menu[5][10] = { "kiwi","pineapple","apple","tomato","banana" };
	char tmp[10];

	printf("Before\n");
	for (int i = 0; i < 5; i++) {
		printf("%s ", menu[i]);
	}

	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < 4; k++) {
			if (strcmp(menu[k], menu[k + 1]) >0) {
				strcpy(tmp, menu[k]);
				strcpy(menu[k], menu[k+1]);
				strcpy(menu[k+1], tmp);
			}
		}
	}
	printf("\nAfter\n");
	for (int i = 0; i < 5; i++) {
		printf("%s ", menu[i]);
	}
}