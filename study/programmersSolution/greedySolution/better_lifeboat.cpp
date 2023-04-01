#include <vector>
#include <algorithm>
#include <deque>
using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    deque<int> peopleQ;
    sort(people.begin(), people.end());

    for(const int &tmp: people)
        peopleQ.push_back(tmp);

    while(!peopleQ.empty()){
        if(peopleQ.front() + peopleQ.back() <= limit && peopleQ.size() > 1){
            peopleQ.pop_front();
            peopleQ.pop_back();
        }else peopleQ.pop_back();
        answer++;
    }
    return answer;
}