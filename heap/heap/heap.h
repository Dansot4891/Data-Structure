class heap {
public:
	static const int capacity = 20;
	int dt;
	int heap_count = 0;
	heap();
	void printIndented(int value, int indent);
	void printHeap(int* arr, int size, int index, int indent);
	void swap(int* a, int* b);
	void push(int data);
	void print(int n);

private:
	int* k;;
};