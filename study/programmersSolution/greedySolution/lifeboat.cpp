#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    sort(people.begin(), people.end());
    for(int i = 0; i < people.size(); i++){
        for(int j = people.size() - 1; j > i; j--){
            if(people[i] + people[j] < limit){
                
            }
            
        }
    }




    return answer;
}

int main(void){
    int lim1 = 100;
    vector<int> p1 = {20, 90, 60, 50, 100};
    vector<int> p2 = {50, 60, 50, 90};
    solution(p1, lim1);
    return 0;
}