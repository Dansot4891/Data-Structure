#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include "A2_heap_Limmyungwoo.h"
using namespace std;

int main() {
	int n;
	while (1) {
		cout << "Input the number of integers : ";
		cin >> n;

		if (n <= 20 && n > 0) {
			cout << "Input " << n << " integers : ";
			break;
		}
	}
	for (int i = 0; i < n; i++) {
		cout << " " << i + 1;
	}
	cout << endl;
	cout << "<The shape of the heap in the rotated form>" << endl;

	heap h1;

	for (int i = n; i > 0; i--) {
		h1.push(i);
	}
	int* p = new int[n];
	h1.printHeap(p, n, 0, 0);
	return 0;
}