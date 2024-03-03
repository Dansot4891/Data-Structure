#include <iostream>
#include "set.h"
using namespace std;

int main(void)
{
	Set s1;
	s1.insert(6); s1.insert(17); s1.insert(4); s1.insert(12); s1.insert(19); s1.insert(22);
	s1.print(0); cout << "-----------" << endl;
	s1.insert(18);
	s1.print(0); cout << "-----------" << endl;
	s1.remove(6);
	s1.print(0); cout << "-----------" << endl;
	return 0;
}