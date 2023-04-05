#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    for(int i = 0; i < completion.size(); i++){
        auto start = participant.begin();
        auto end = participant.end();
        auto it = find(start, end, completion[i]);
        if(it != end){
            auto idx = it - start;
            participant.erase(start + idx);
        }
    }
    answer = participant.front();
    return answer;
}

int main(void){
    vector<string> p1 = {"leo", "kiki", "eden"};
    vector<string> c1 = {"eden", "kiki"};
    cout << solution(p1, c1) << endl;
    return 0;
}