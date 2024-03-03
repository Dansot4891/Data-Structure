#include <iostream>     // Provides cout and cin
#include <string>
#include <cstdlib>      // Provides EXIT_SUCCESS & NULL
#include "node2.h"
#include <set>

using namespace std;
using namespace main_savitch_6B;


int main()
{
	
	node<string>* head_ptr = NULL;
	node<string> first_node("apple", NULL);
	node<string> second_node("orange", &first_node);
	node<string> third_node;
	third_node.set_data("strawberry"); third_node.set_link(&second_node);

	head_ptr = &third_node;

	cout << list_length(head_ptr) << endl;

	for (node<string>* cursor = head_ptr; cursor != NULL; cursor = cursor->link())
		cout << cursor->data() << endl;

	node<double>* head_ptr2 = NULL;
	node<double> n1(5.5, NULL);
	node<double> n2(4.6, &n1);
	node<double> n3(7.1, &n2);
	head_ptr2 = &n3;
	for(node<double>* c1 = head_ptr2;c1!=NULL;c1=c1->link())
		cout << c1->data() << endl;

	
	return EXIT_SUCCESS;
}
