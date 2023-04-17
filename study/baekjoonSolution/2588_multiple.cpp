#include <iostream>
using namespace std;

int solution(int &a, int &b, int &c){
    unsigned long long mul = 1;
    for(int i = 0; i < b; i++)
        mul *= a;
    return mul % c;
}

int main(void){
    int A, B, C;
    cin >> A >> B >> C;
    cout << solution(A, B, C) << endl;
    return 0;
}