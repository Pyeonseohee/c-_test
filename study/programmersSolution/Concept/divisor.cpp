// ��� ���ϴ� �˰���
#include <iostream>
using namespace std;

void simplest_factor(int a){
    if(a <= 0) return ;
    
    for(int i = 1; i <= a; i++){
        if(a % i == 0)
            cout << a << "�� ���: " << i <<  endl;
    }
}

void more_factor(int a){
    if(a <= 0) return ;
    for(int i = 1; i <= a / 2; i++){
        if(a % i == 0)
            cout << a << "�� ���: " << i << endl;
    }
    cout << a << "�� ��� : " << a << endl;
}

void best_factor(int a){
    if(a <= 0) return ;
    for(int i = 1; i * i <= a; i++){
        if(i * i == a){
            cout << i << "�� " << a << "�� �ߺ��Ǵ� ������" << endl;
        }else if(a % i == 0){
            cout << a << "�� ���: " << i << ", " << a / i << endl;
        }
    }
}

int main(void){
    simplest_factor(10);
    cout << "---------" << endl;
    more_factor(15);
    cout << "---------" << endl;
    best_factor(18);
    return 0;
}