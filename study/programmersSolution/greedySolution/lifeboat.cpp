#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    sort(people.begin(), people.end());

    while(!people.empty()){
        vector<int>::iterator iter = people.begin();
        for(int i = people.size() - 1; i > 0; i--){
            if(people.front() + people[i] <= limit){
                people.erase(iter + i);
                break;
            }
        }
        people.erase(iter);
        answer++;
    }
    return answer;
}

int main(void){
    int lim1 = 100;
    vector<int> p1 = {20, 95, 100, 80, 50, 30, 60};
    vector<int> p2 = {50, 60, 50, 90};
    cout << solution(p1, lim1) << endl;
    return 0;
}