#include <iostream>     // Provides cout and cin
#include <cstdlib>      // Provides EXIT_SUCCESS & NULL
#include "bag3.h"
using namespace std;
using namespace main_savitch_5;


/*void main()
{
    bag b1;
    bag b2;
    b1.insert(1);
    b1.insert(1);
    b1.insert(3);
    b1.insert(5);
    
    b2.insert(2);
    b2.insert(4);
    b2.insert(6);

    cout << b1.count(1) << endl;
    b1.erase_one(1);
    
    cout << b1.count(1) << endl;
    b1.insert(1); 
    b1.erase(1);
    
    cout << b1.count(1) << endl;
   
    cout << b1.grab() << endl;
}
*/

void insert_bag(bag& b);

void remove_bag(bag& b);

void all_remove_bag(bag& b);

void count_bag(bag& b);

int main()
{
    
    bag b1;
    b1.insert(1);
    b1.insert(2);
    b1.insert(3);

    bag b2(b1);
    b2.insert(4);
    b2.insert(5);

    b1 += b2;
    cout << "b1's size: " << b1.size() << endl;
    cout << "b2's siez: " << b2.size() << endl;

    b1.pt1();
    b2.pt1();
    
    /*
    bag b1;
    bag b2;
    cout << "b1����" << endl;
    insert_bag(b1);
    remove_bag(b1);
    all_remove_bag(b1);
    cout << "b1������ ���� �����ڽ��ϴ�." << endl;
    count_bag(b1);
    
    cout << "b2����" << endl;
    insert_bag(b2);
    cout << "b2������ ���� �����ڽ��ϴ�." << endl;
    count_bag(b2);
    
    cout << "b1�� �ִ� ���� b2�� �Ȱ��� �߰��ϰڽ��ϴ�." << endl;
    b2 += b1;
    cout << "�߰��� b2������ ���� �����ڽ��ϴ�." << endl;
    count_bag(b2);
    cout << "b1�� b2�� ������ ��ġ�ڽ��ϴ�." << endl;
    bag b3 = b2 + b1;
 
    cout << "��ģ b3���� ���� �����ڽ��ϴ�." << endl;
    count_bag(b3);
    
    cout << "b3�� �� �߿��� �ϳ��� �������ڽ��ϴ�." << endl;
    cout << "������ �� : ";
    cout << b3.grab() << endl;
    
    cout << "b3�� b4�� �״�� �����ϰڽ��ϴ�." << endl;
    bag b4 = b3;
    cout << "������ b4���� ���� �����ڽ��ϴ�." << endl;
    count_bag(b4);
    cout << "b4�� ��� �����ϰڽ��ϴ�." << endl;
    b4.~bag();
    cout << "������ b4���� ���� �����ڽ��ϴ�." << endl;
    count_bag(b4);
    cout << "���ο� ���� b5�� ����� b3�� �����ϰڽ��ϴ�." << endl;
    bag b5(b3);
    cout << "������ b5���� ���� �����ڽ��ϴ�." << endl;
    count_bag(b5);
    */
    return EXIT_SUCCESS;
}


void insert_bag(bag& b)
{
    int insert_input;
    
    cout << "���濡 ���� ���� �Է����ּ���. (-1�Է½� ����) " << endl;
    cin >> insert_input;
    while (insert_input >= 0)
    {
        b.insert(insert_input);
        cin >> insert_input;
    }
}


void remove_bag(bag& b) {
    int remove_input;

    cout << "�����Ϸ��� ���� �Է����ּ���. (-1�Է½� ����) : " << endl;
    while (true) {
        cin >> remove_input;
        if (b.erase_one(remove_input))
            cout << "���� �Ϸ�" << endl;
        else if (remove_input == -1 or b.size()==0) {
            break;
        }
        else
            cout << "���濡 �������� �ʴ� ���Դϴ�." << endl;
    }
}

void all_remove_bag(bag& b) {
    int remove_input;

    cout << "�ѹ��� �����Ϸ��� ���� �Է����ּ���. (-1�Է½� ����) : " << endl;
    while (true) {
        cin >> remove_input;
        if (b.erase(remove_input))
            cout << "���� �Ϸ�" << endl;
        else if (remove_input == -1 or b.size() == 0) {
            break;
        }
        else
            cout << "���濡 �������� �ʴ� ���Դϴ�." << endl;
    }
}

void count_bag(bag& b) {
    int count_input;
    cout << "���� ���� ���ڸ� �Է����ּ���. (-1�Է½� ����)" << endl;
    while (true) {
        cin >> count_input;
        if (count_input == -1) {
            break;
        }
        cout << count_input;
        cout << "�� ���� : ";
        cout <<  b.count(count_input) << endl;
    }
}
