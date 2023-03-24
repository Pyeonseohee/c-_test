#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> count;
    int day;
    int max_day = 0;
    for(int i = 0; i < progresses.size(); i++){
        day = ((99 - progresses[i]) / speeds[i]) + 1;
        if(answer.empty() || day > max_day){
            answer.push_back(1);
            max_day = day;
        }
        else
            ++answer.back();
    }
    return answer;
} 

int main(void){
    vector<int> p = {95, 90, 99, 99, 80, 99};
    vector<int> s = {1, 1, 1, 1, 1, 1};
    solution(p, s);
    return 0;
}