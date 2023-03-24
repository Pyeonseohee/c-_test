#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVector(vector<int> v)
{
    for(int i = 0; i < v.size(); i++)
        cout << "v[" << i << "]: " << v[i] << " ";
}

int main(void){
    vector<int> v = {1, 2, 2, 3, 3, 1, 3, 2, 1, 0};
    unique(v.begin(), v.end()); // unique의 반환값은 쓰레기 값의 첫번째 위치
    printVector(v);
    // 이렇게만 하면 뒤에 쓰레기 값이 저장됨. {1, 2, 3, 1, 3, 2, 1, 0} 외에 뒤에 {1, 0}이라는 값이 더 붙음..
    // erase로 해결하면 됨!
    v.erase(unique(v.begin(), v.end()), v.end());
    cout << endl << "erase 후: ";
    printVector(v);
    return 0;
}