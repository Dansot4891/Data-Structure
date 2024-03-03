class heap {
public:
	static const int capacity = 20;
	int heap_count = 0;
	heap();
	void printIndented(int value, int indent);
	void printHeap(int* arr, int size, int index, int indent);
	void push(int data);

private:
	int* k;;
};