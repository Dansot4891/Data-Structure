#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;



void swap(int& a,int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void make_it_42(int* i_ptr)
{
	*i_ptr = 42;
}

int main() {
	int* main_ptr;
	main_ptr = new int;
	make_it_42(main_ptr);
	cout << main_ptr << endl;

	return EXIT_SUCCESS;
}