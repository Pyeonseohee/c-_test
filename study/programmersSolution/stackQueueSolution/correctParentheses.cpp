#include <string>
#include <iostream>
#include <deque>
using namespace std;

bool solution(string s)
{
    deque<char> str;
    for(char c: s){
        str.push_back(c);
    }

    if(str.front() == ')' || str.back() == '(' || s.length() % 2 != 0) return false;
    
    while(!str.empty()){
        char q = str.front();
        str.pop_front();
        cout << "q: " << q << " " << "front: " << str.front() << endl;
        if(q == str.front()){
            if(q == str.back()) {
                return false;
            }
            str.pop_back();
        }else
            str.pop_front();
    }
    return true;
}

int main(void){
    string s1 = "()(())()"; // true
    string s2 = "((())))"; // false
    string s3 = "(((())))"; // true

    cout << solution(s1) << endl;
    cout << " ------------------------- " << endl;
    cout << solution(s2) << endl;
    cout << " ------------------------- " << endl;
    cout << solution(s3) << endl;
    cout << " ------------------------- " << endl;
    return 0;
}