#include <cstdlib>     // Provides EXIT_SUCCESS and size_t
#include <iostream>    // Provides cin, cout
#include "searches.h"   
#include "graph.h"
using namespace std;
using namespace main_savitch_15;

void print_vertex(int i)
{
	cout << i << " ";
}


int main()
{
	graph<int> g1;
	g1.add_vertex(0); g1.add_vertex(1); g1.add_vertex(2); g1.add_vertex(3);
	g1.add_vertex(4); g1.add_vertex(5); g1.add_vertex(6); g1.add_vertex(7);
	g1.add_edge(0, 1); g1.add_edge(1, 2); g1.add_edge(2, 3); g1.add_edge(3, 7);
	g1.add_edge(4, 5); g1.add_edge(5, 6); g1.add_edge(6, 7); g1.add_edge(0, 4);
	g1.add_edge(0, 7);
	depth_first(print_vertex, g1, 0); cout << endl;
	breadth_first(print_vertex, g1, 0);
	return EXIT_SUCCESS;
}
