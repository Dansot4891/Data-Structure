#include <iostream>  // Provides cin, cout
#include <cstdlib>   // Provides EXIT_SUCCESS
using namespace std;

void write_vertical(unsigned int number);
void super_write_vertical(int number);

int main()
{
    int i;

    cout << "Please type a non-negative number: ";
    cin >> i;
    cout << "The digits of that number are:" << endl;
    write_vertical(i);

    cout << "Please type a negative number: ";
    cin >> i;
    cout << "The digits of that number are:" << endl;
    super_write_vertical(i);

    cout << "Let's get vertical!" << endl;
    return EXIT_SUCCESS;
}


void write_vertical(unsigned int number)
{
    if (number < 10)
        cout << number << endl;
    else
    {
        write_vertical(number / 10);
        cout << number % 10 << endl;
    }
}

void super_write_vertical(int number)
{
    if (number < 0)
    {
        cout << '-' << endl;
        super_write_vertical(abs(number));
    }
    else if (number < 10)
        cout << number << endl;
    else
    {
        super_write_vertical(number / 10);
        cout << number % 10 << endl;
    }
}
