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
		printf("%s�� %s���� �ڿ� �ֳ׿�.\n",str1,str2);
	}
	else if (rst < 0) {
		printf("%s�� %s���� �տ� �ֳ׿�.\n",str1,str2);
	}
	else {
		printf("���� �Ȱ��ƿ�.\n");
	}
	*/

	//���� ���߱�
	/*
	char s1[30] = "banana";
	char s2[30];
	int cnt = 0;

	while (1) {
		printf("�����ϴ� ���� : ");
		scanf("%s", &s2);
		cnt++;
		if (strcmp(s1, s2) == 0) {
			printf("�����Դϴ�. %d�� ���� �����ϼ̳׿�.",cnt);
			break;
		}
		else {
		}
	}*/


	//��� �������� �ٽ��غ���
	/*
	char sol[30] = "meet at midnight";
	char ans[30] = "____ __ ________";
	char ch;
	int i;

	while (1) {
		printf("\ninput : %s \n", ans);
		printf("�����غ����� : ");
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
		printf("���ڿ� : %s\n",ans);
		printf("���� ���� : ");
		scanf("%c", &a);
		for (int i = 0; i < strlen(quiz); i++) {
			if (a == quiz[i]) {
				ans[i] = a;
			}
		}
		if (strcmp(quiz, ans) == 0) {
			printf("���ڿ� : %s\n", ans);
			printf("����!");
			break;
		}
	}
	*/
	//�ܾ� �ֳ��׷� ����
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
		printf("%s �� ���ܾ��?\n", s1);
		scanf("%s", &s2);


	} while (strcmp("apple", s2) != 0);
	printf("%d��° �����Դϴ�.",cnt);
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
		printf("%s �ֳ��׷� ���� : ", a);
		scanf("%s", &b);
		if (strcmp(a1, b) == 0) {
			printf("%s ���� %d�õ�", b,ct);
			break;
		}
	}
	*/

	//���ڿ� ����
	/*
	char menu[5][10] = {"kiwi","pineapple","apple","tomato","banana"};
	char tmp[20];
	
	printf("Before\n");
	for (int i = 0; i < 5; i++) {
		printf("%s ", menu[i]);
	}

	for (int i = 0; i < 5; i++) {//����
		for (int j = 0; j < 5; j++) {//��ȯ
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