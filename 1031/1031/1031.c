#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
	//2차원 배열1
	/*
	int sum1 = 0, sum2 = 0;
	int arr[3][5] = {
		{0,1,2,3,4},
		{10,11,12,13,14},
		{20,21,22,23,24}
	};
	for (int i = 0; i < 3; i++) {
		sum2 = 0;
		for (int k = 0; k < 5; k++) {
			printf("%3d ",arr[i][k]);
			sum1 += arr[i][k];
			sum2 += arr[i][k];
		}
		printf("\n");
		printf("sum = %d\n", sum2);
	}printf("sum1 = %d", sum1);
	*/


	//2차원 배열2
	/*
	int sum = 0;
	int arr1[3][3] = { {1,0,0}, {0,1,0}, {0,0,1} };
	int arr2[3][3] = { {1,0,0}, {0,1,0}, {0,0,1} };
	int arr3[3][3] = { {1,0,0}, {0,1,0}, {0,0,1} };

	for (int i = 0; i < 3; i++) {
		for (int k = 0; k < 3; k++) {
			arr3[i][k] = arr1[i][k] + arr2[i][k];
			printf("%3d ", arr3[i][k]);
		}
		printf("\n");
	}
	*/


	//2차원 배열 구구단
	/*
	int arr[8][9];
	for (int i = 0; i < 8; i++) {
		printf("%d단\n", i + 2);
		for (int j = 0; j < 9; j++) {
			arr[i][j] = (i + 2) * (j + 1);
			printf("%d X %d = %d\n", i+2,j+1, arr[i][j]);
		}
	}
	*/
	

	//tic-tac-toe(for문) 혼자 작성해보기
	/*
	char c[3][3] = { ' ' };
	int x, y;

	for (int i = 0; i < 9; i++) {
		printf("좌표 : ");
		scanf("%d %d", &x, &y);
		c[x][y] = (i % 2 == 0)?'X':'O';

		for (int k = 0; k < 3; k++) {
			printf("---l---l---\n");
			printf("%3cl%3cl%3cl\n", c[k][0], c[k][1], c[k][2]);
		}
		printf("---l---l---\n");
	}
	*/


	//문자열 배열
	/*
	char str[15] = "Ok Start";
	printf("%s \n", str);
	for (int i = 0; i < 15; i++) {
		printf("%c",str[i]);
	}
	*/


	//gets_s
	/*
	char str[15];
	printf("입력 : ");
	gets_s(str, sizeof(str));
	printf("%s \n", str);
	*/


	//대->소, 소->대
	/*
	char str[10];
	printf("입력 : ");
	gets_s(str, sizeof(str));
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] += 32;
		}
		else if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] -= 32;
		}
		printf("%c ",str[i]);
	}
	*/
}