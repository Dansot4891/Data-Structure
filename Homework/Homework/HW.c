#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
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
}