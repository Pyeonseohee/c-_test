#include <iostream>
#include <queue>
using namespace std;

void solution(int &a, int &b){
    queue<int> q;
    int mul = a * b;
    while(b >= 10){
        q.push(b % 10); // 5 8 
        b /= 10;        // 38 3
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