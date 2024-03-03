#include <stdlib.h>
#include <string.h>
#include <cassert>
#include <iostream>
using namespace std;


void make_it_all_42(double data[], size_t n)
{
    size_t i;
    for (i = 0; i < n; ++i)
        data[i] = 42;
}

bool is_42(const int* i_ptr)
{
    return (*i_ptr == 42);
}

void allocate_doubles(double*& p, size_t& n){
    cout << "Enter the number of doubles : ";
    cin >> n;
    p = new double[n];
}
//cin으로 입력받은 n크기 만큼의 double배열 생성하는 함수

template <class k>
k sum_ab(k a, k b) {
    return a + b;
}

template <class Item, class SizeType>
Item array_max(Item data[], SizeType n)
{
    SizeType i;
    Item answer;

    assert(n > 0);
    answer = data[0];
    for (i = 1; i < n; i++)
        if (data[i] > answer) answer = data[i];
    return answer;
}

void make_it_all_42(double data[], int n)
{
    int i;
    for (i = 0; i < n; ++i)
        data[i] = 42;
}

void make_it_42(int* i_ptr)
{
    *i_ptr = 42;
}



int main() {
    int* main_ptr;
    main_ptr = new int;
    make_it_42(main_ptr);
    int* main_ptr1;
    main_ptr1 = new int;
    make_it_42(main_ptr1);

    cout << *main_ptr << endl;
    cout << *main_ptr1 << endl;

    return EXIT_SUCCESS;
}