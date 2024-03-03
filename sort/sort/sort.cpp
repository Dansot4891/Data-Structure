#include "iostream"
using namespace std;


void swap(int& a, int& b) {
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

//Selection Sort
void  SelectionSort(int data[], size_t n) {
    size_t  i, j, index_of_largest;
    int  largest;

    if (n == 0) return;
    for (i = n - 1; i > 0; --i) {
        largest = data[0];
        index_of_largest = 0;
        for (j = 1; j <= i; ++j) {
            if (data[j] > largest) {
                largest = data[j];
                index_of_largest = j;
            }
        }
        swap(data[i],
            data[index_of_largest]);
    }
}

//Insertion Sort
void  insertionSort(int data[], size_t n) {
    size_t  i, j;
    int  next;

    if (n == 0) return;
    for (i = 1; i < n; ++i) {
        next = data[i];
        j = i;
        while (j > 0 && next < data[j - 1]) {
            data[j] = data[j - 1];
            --j;
        }

        data[j] = next;
    }
}

void main() {
    
    int s[7];
    int k;

    cout << "Enter 7 integers" << endl;
    for (int i = 0; i < 7; i++) {
        cin >> k;
        s[i] = k;
    }
    
    cout << endl;
    
    cout << "Enter 7 integers : ";
    for (int i = 0; i < 7; i++) {
        cout << s[i] << " ";
    }

    cout << endl;

    SelectionSort(s, 7);

    for (int i = 0; i < 7; i++) {
        cout << s[i] << " ";
    }

    return;
}