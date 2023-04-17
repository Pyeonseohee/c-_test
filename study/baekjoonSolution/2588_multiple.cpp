#include <iostream>
#include <queue>
using namespace std;
// 세 자리 자연수라는 조건을 까먹어서... 괜히 어렵게 품!

void solution(int &a, int &b){
    queue<int> q;
    int mul = a * b;
    while(b >= 10){
        q.push(b % 10);
        b /= 10;
    }
    q.push(b);

    while(!q.empty()){
        int x = q.front();
        q.pop();
        cout << a * x << endl;
    }

    cout << mul << endl;
}

int main(void){
    int A, B;
    cin >> A >> B;
    solution(A, B);
    return 0;
}