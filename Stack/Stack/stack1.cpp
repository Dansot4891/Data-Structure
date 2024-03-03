#include <cstdlib>     // Provides EXIT_SUCCESS
#include <iostream>    // Provides cin, cout
#include <string>      // Provides string
#include "stack1.h"    // Provides stack

using namespace std;
using namespace main_savitch_7A;

bool is_balanced(const string& expression);

int main()
{
    string user_input;

    cout << "Type a string with some parentheses:\n";
    getline(cin, user_input);

    if (is_balanced(user_input))
        cout << "Those parentheses are balanced.\n";
    else
        cout << "Those parentheses are not balanced.\n";

    cout << "That ends this balancing act.\n";
    return EXIT_SUCCESS;
}

bool is_balanced(const string& expression)
{
    const char LEFT_PARENTHESIS = '(';
    const char RIGHT_PARENTHESIS = ')';

    stack<char> store;    // Stack to store the left parentheses as they occur
    string::size_type i;  // An index into the string
    char next;            // The next character from the string
    bool failed = false;  // Becomes true if a needed parenthesis is not found

    for (i = 0; !failed && (i < expression.length()); ++i)
    {
        next = expression[i];
        if (next == LEFT_PARENTHESIS)
            store.push(next);
        else if ((next == RIGHT_PARENTHESIS) && (!store.empty()))
            store.pop(); // Pops the corresponding left parenthesis.
        else if ((next == RIGHT_PARENTHESIS) && (store.empty()))
            failed = true;
    }

    return (store.empty() && !failed);
}
