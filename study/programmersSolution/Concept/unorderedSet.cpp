#include <iostream>
#include <unordered_set>
using namespace std;

int main(void){
    unordered_set<int> tmp;

    tmp.insert(3);
    tmp.insert(5);
    tmp.insert(2);
    tmp.insert(1);
    tmp.insert(5);
    tmp.insert(1);
    tmp.insert(2);

    for(int i: tmp)
        cout << i << " ";
    cout << endl;
    return 0;
}