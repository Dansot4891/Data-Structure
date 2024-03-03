#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "heap.h"

using namespace std;

void heap::printIndented(int value, int indent) {
	cout << std::setw(indent) << value << endl;
}

void heap::printHeap(int* arr, int size, int index, int indent) {
	arr = k;
	if (index >= size) {
		return;
	}

	printHeap(arr, size, 2 * index + 2, indent + 4);
	
	printIndented(arr[index], indent);

	printHeap(arr, size, 2 * index + 1, indent + 4);
}

heap::heap() {
	k = new int[capacity];
}

void heap::push(int data) {
	k[heap_count] = data;
	heap_count++;

}


void heap::swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
