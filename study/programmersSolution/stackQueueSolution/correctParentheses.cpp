#include<string>
#include <iostream>
#include <deque>
using namespace std;



bool solution(string s)
{
    deque<char> str;
    int len = 0;
    for(char c: s){
        str.push_back(c);
        len++;
    }

    if(str.front() == ')' || str.back() == '(' || len % 2 != 0) return false;
    while(!str.empty()){
        int q = str.front();
        str.pop_front();
        if(q == str.front()){
            if(q == str.back()) {
                return false;
                break;
            }
            str.pop_back();
        }else
            str.pop_front();
    }
    return true;
}

int main(void){
    string s = "()(())()";
    cout << solution(s) << endl;
    return 0;
}