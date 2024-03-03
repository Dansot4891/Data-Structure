#include <iostream>  // Provides cin, cout
#include <cstdlib>   // Provides EXIT_SUCCESS
#include "bintree.h"
using namespace std;
using namespace main_savitch_10;

void print_tree(int i)
{
    cout << i << " ";
}

int main()
{
    binary_tree_node<int>* p1 = new binary_tree_node<int>(1, NULL, NULL);
    binary_tree_node<int>* p2 = new binary_tree_node<int>(2, NULL, NULL);
    binary_tree_node<int>* p3 = new binary_tree_node<int>(3, p1, p2);
    binary_tree_node<int>* p4 = new binary_tree_node<int>(4, p3, NULL);
    binary_tree_node<int>* p5 = new binary_tree_node<int>(5, p4, NULL);
/*
    cout << tree_size(p5) << endl;
    cout << p5->left()->left()->data() << endl;
    cout << p1->is_leaf() << endl;    cout << p3->is_leaf() << endl;

    binary_tree_node<int>* new_root = tree_copy(p5);
    cout << tree_size(new_root) << endl;
    cout << new_root->left()->left()->left()->data() << endl;

    tree_clear(p5);
    cout << tree_size(p5) << endl;
    */
    inorder(print_tree, p5); cout << endl;
    preorder(print_tree, p5); cout << endl;
    postorder(print_tree, p5); cout << endl;
    print(p5, 0);
    
    return EXIT_SUCCESS;
}
