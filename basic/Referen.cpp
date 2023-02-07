#include <iostream>
using namespace std;

int main(void){
    int num1 = 1020;
    int &num2 = num1; // 새로 선언되는 변수의 이름 앞에 등장하면, 이는 참조자의 선언을 뜻하는 게 됨
    // 선언과 동시에 어떤 변수를 참조해야함. 선언만 미리 해서도 안되며 변수가 아닌 다른 것을 참조해서도 안됨.

    num2 = 3047; // num1이라 불리는 메모리 공간에 두 번째 이름 num2.

    cout << "VAL: " << num1 << endl;
    cout << "REF: " << num2 << endl;

    cout << "REF: " << &num1 << endl;
    cout << "REF: " << &num2 << endl;
    return 0;
}