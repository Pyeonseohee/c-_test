#include <iostream>
using namespace std;

void fourOperation(int n1, int n2){
    cout << n1 + n2 << endl;
    cout << n1 - n2 << endl;
    cout << n1 * n2 << endl;
    cout << n1 / n2 << endl;
    cout << n1 % n2 << endl;
}

int main(void){
    int n1, n2;
    cin >> n1 >> n2;
    fourOperation(n1, n2);
    return 0;
}