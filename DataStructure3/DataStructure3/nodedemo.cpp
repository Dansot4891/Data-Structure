#include <iostream>     // Provides cout and cin
#include <cstdlib>      // Provides EXIT_SUCCESS & NULL
#include "node1.h"
#include <iterator>
using namespace std;
using namespace main_savitch_5;

//search는 2라는 숫자가 어디에 있는지를 찾음
//locate는 2번째 위치에 뭐가 있는지를 찾음.
//insert(2,3)은 3이라는 숫자를 2번째 뒤에 넣을거라는 의미임.

/* 하나 더 노드 만들어서 복사하는거임
node* head_ptr2 = NULL, * temp_ptr2 = NULL;
list_copy(head_ptr, head_ptr2, temp_ptr2);
*/

int main()
{
    node* head_ptr = NULL, * temp_ptr = NULL;

    list_head_insert(head_ptr, 1);
    list_head_insert(head_ptr, 2);
    list_head_insert(head_ptr, 3);
    list_head_insert(head_ptr, 4);

    temp_ptr = list_search(head_ptr, 3);
    list_insert(temp_ptr, 6);

    temp_ptr = list_locate(head_ptr, 3);
    list_insert(temp_ptr, 7);

    for (node* cursor = head_ptr; cursor != NULL; cursor = cursor->link())
        cout << cursor->data() << endl;

    /*
    node* head_ptr = NULL, * tail_ptr = NULL;

    list_head_insert(head_ptr, 1);
    list_head_insert(head_ptr, 2);
    list_head_insert(head_ptr, 3);
    list_head_insert(head_ptr, 4);
    tail_ptr = list_search(head_ptr, 1);

    list_head_remove(head_ptr);

    node* head_ptr2 = NULL, * tail_ptr2 = NULL;
    list_copy(head_ptr, head_ptr2, tail_ptr2);


    cout << "LIST 1" << endl;
    for (node* cursor = head_ptr; cursor != NULL; cursor = cursor->link())
        cout << cursor->data() << endl;

    cout << "LIST 2" << endl;
    for (node* cursor = head_ptr2; cursor != NULL; cursor = cursor->link())
        cout << cursor->data() << endl;

    list_clear(head_ptr);

    cout << "LIST 1 after list_clear" << endl;
    for (node* cursor = head_ptr; cursor != NULL; cursor = cursor->link())
        cout << cursor->data() << endl;
    */
    return EXIT_SUCCESS;
}
