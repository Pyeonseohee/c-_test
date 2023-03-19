// 약수 구하는 알고리즘
#include <iostream>
using namespace std;

void simplest_factor(int a){
    if(a <= 0) return ;
    
    for(int i = 1; i <= a; i++){
        if(a % i == 0)
            cout << a << "의 약수: " << i <<  endl;
    }
}

void more_factor(int a){
    if(a <= 0) return ;
    for(int i = 1; i <= a / 2; i++){
        if(a % i == 0)
            cout << a << "의 약수: " << i << endl;
    }
    cout << a << "의 약수 : " << a << endl;
}

void best_factor(int a){
    if(a <= 0) return ;
    for(int i = 1; i * i <= a; i++){
        if(i * i == a){
            cout << i << "는 " << a << "의 중복되는 제곱수" << endl;
        }else if(a % i == 0){
            cout << a << "의 약수: " << i << ", " << a / i << endl;
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