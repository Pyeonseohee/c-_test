#include <string>
#include <iostream>
#include <queue>
using namespace std;

bool solution(string s)
{
    queue<char> str;
    int len = s.length();
    if(s[0] == ')' || s[len - 1] == '(' || len % 2 != 0) return false;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ')' && !str.empty()) str.pop();
        else if(s[i] == '(') str.push(s[i]);
    }

    if(str.empty()) return true;
    else return false;
}

int main(void){
    string s1 = "()((()))()"; // true
    string s2 = "((())))"; // false
    string s3 = "(((())))"; // true
    string s4 = "(((())()))"; //true;

    cout << solution(s1) << endl;
    cout << " ------------------------- " << endl;
    cout << solution(s2) << endl;
    cout << " ------------------------- " << endl;
    cout << solution(s3) << endl;
    cout << " ------------------------- " << endl;
    cout << solution(s4) << endl;
    cout << " ------------------------- " << endl;
    return 0;
}