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
    cout << "b1가방" << endl;
    insert_bag(b1);
    remove_bag(b1);
    all_remove_bag(b1);
    cout << "b1가방의 수를 세보겠습니다." << endl;
    count_bag(b1);
    
    cout << "b2가방" << endl;
    insert_bag(b2);
    cout << "b2가방의 수를 세보겠습니다." << endl;
    count_bag(b2);
    
    cout << "b1에 있는 수를 b2에 똑같이 추가하겠습니다." << endl;
    b2 += b1;
    cout << "추가한 b2가방의 수를 세보겠습니다." << endl;
    count_bag(b2);
    cout << "b1과 b2의 가방을 합치겠습니다." << endl;
    bag b3 = b2 + b1;
 
    cout << "합친 b3내의 수를 세보겠습니다." << endl;
    count_bag(b3);
    
    cout << "b3의 수 중에서 하나를 가져오겠습니다." << endl;
    cout << "가져온 수 : ";
    cout << b3.grab() << endl;
    
    cout << "b3를 b4에 그대로 복사하겠습니다." << endl;
    bag b4 = b3;
    cout << "복사한 b4내의 수를 세보겠습니다." << endl;
    count_bag(b4);
    cout << "b4를 모두 삭제하겠습니다." << endl;
    b4.~bag();
    cout << "삭제한 b4내의 수를 세보겠습니다." << endl;
    count_bag(b4);
    cout << "새로운 가방 b5를 만들어 b3를 복사하겠습니다." << endl;
    bag b5(b3);
    cout << "복사한 b5내의 수를 세보겠습니다." << endl;
    count_bag(b5);
    */
    return EXIT_SUCCESS;
}


void insert_bag(bag& b)
{
    int insert_input;
    
    cout << "가방에 넣을 수를 입력해주세요. (-1입력시 종료) " << endl;
    cin >> insert_input;
    while (insert_input >= 0)
    {
        b.insert(insert_input);
        cin >> insert_input;
    }
}


void remove_bag(bag& b) {
    int remove_input;

    cout << "제거하려는 수를 입력해주세요. (-1입력시 종료) : " << endl;
    while (true) {
        cin >> remove_input;
        if (b.erase_one(remove_input))
            cout << "제거 완료" << endl;
        else if (remove_input == -1 or b.size()==0) {
            break;
        }
        else
            cout << "가방에 존재하지 않는 수입니다." << endl;
    }
}

void all_remove_bag(bag& b) {
    int remove_input;

    cout << "한번에 제거하려는 수를 입력해주세요. (-1입력시 종료) : " << endl;
    while (true) {
        cin >> remove_input;
        if (b.erase(remove_input))
            cout << "제거 완료" << endl;
        else if (remove_input == -1 or b.size() == 0) {
            break;
        }
        else
            cout << "가방에 존재하지 않는 수입니다." << endl;
    }
}

void count_bag(bag& b) {
    int count_input;
    cout << "세고 싶은 숫자를 입력해주세요. (-1입력시 종료)" << endl;
    while (true) {
        cin >> count_input;
        if (count_input == -1) {
            break;
        }
        cout << count_input;
        cout << "의 개수 : ";
        cout <<  b.count(count_input) << endl;
    }
}
