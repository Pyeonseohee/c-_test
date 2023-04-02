#include <queue>
#include <iostream>
using namespace std;

int main(void){
    priority_queue<int, vector<int>, greater<int>> p;
    p.push(9);
    p.push(5);
    p.push(1);
    p.push(3);
    while(!p.empty()){
        cout << p.top() << " ";
        p.pop();
    }
    cout << endl;
    return 0;
}