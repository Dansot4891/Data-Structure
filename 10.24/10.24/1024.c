#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	//�迭1
	/*
	int i,size;
	int s[5] = {1,2,3,4,5};
	int t[] = { 3 };
	int u[5];
	char c[] = "gachon";

	size = sizeof(s) / sizeof(s[1]);
	
	for (int i = 0; i < size; i++) {
		printf("%d ", s[i]);
	}
	size = sizeof(t) / sizeof(t[1]);
	printf("\n");
	for (int i = 0; i < size; i++) {
		printf("%d ", t[i]);
	}
	size = sizeof(c) / sizeof(c[1]);
	printf("\n");

	for (int i = 0; i < size; i++) {
		printf("%c ", c[i]);
	}
	*/

	//�迭2
	/*
	int i,size,ct = 0,sum = 0,avg = 0;
	int s[10] = {0};
	size = sizeof(s) / sizeof(s[0]);
	for (int i = 0; i < size; i++) {
			printf("(-1�Է½� ����)input : " );
			scanf("%d", &s[i]);
			if (s[i] == -1) {
				break;
			}
			ct++;
			sum += s[i];
	}
	for (int i = 0; i < ct; i++) {
		printf("%d ", s[i]);
	}
	printf("\n");
	size = sizeof(s) / sizeof(s[0]);
	printf("sum = %d\n", sum);
	avg = sum / ct;
	printf("avg = %d", avg);
	*/


	int i;
	int bk[16] = {0};
	int cnt = 0,cnt1 = 0;
	float bat;

	printf("�⼮�� 1 �Ἦ�� 0�Է�\n");
	for (int i = 0; i < 16; i++) {
		printf("��� : ");
		scanf("%d", &bk[i]);
		if (bk[i] == 0) {
			cnt++;
		}cnt1++;
	bat = cnt / 16.0;
	printf("�Ἦȸ�� : %d\n", cnt);
	if (bat > 0.3) {
		printf("��������\n");
	}
}