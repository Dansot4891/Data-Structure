#include <iostream>     // Provides cout and cin
#include <string>
#include <cstdlib>      // Provides EXIT_SUCCESS & NULL
#include "node2.h"
#include <set>

using namespace std;
using namespace main_savitch_6B;

void printMultiset(const multiset<int>& mset)
{
	multiset<int>::iterator iter;
	for (iter = mset.begin(); iter != mset.end(); iter++)
		cout << *iter << " ";
	cout << endl;
}

int main()
{
	multiset<int> my_set;
	my_set.insert(3); my_set.insert(2);
	my_set.insert(4); my_set.insert(3);
	cout << my_set.count(3) << endl;
	printMultiset(my_set);
	my_set.erase(2);
	printMultiset(my_set);
	cout << my_set.size() << endl;
/*
	node<string>* head_ptr = NULL;
	node<string> first_node("apple", NULL);
	node<string> second_node("orange", &first_node);
	node<string> third_node;
	third_node.set_data("strawberry"); third_node.set_link(&second_node);

	head_ptr = &third_node;

	cout << list_length(head_ptr) << endl;

	for (node<string>* cursor = head_ptr; cursor != NULL; cursor = cursor->link())
		cout << cursor->data() << endl;
*/
	return EXIT_SUCCESS;
}
