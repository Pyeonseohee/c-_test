#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(vector<int> citations){
    int answer = 0;
    sort(citations.begin(), citations.end());
    if (citations[0] >= citations.size()) return citations.size();
    
    for(int i = 0; i < citations.size(); i++){
        //citation[i] = h꼴
        int tmp = 0;
        for(int j = 0; j < citations.size(); j++){
            if (i <= citations[j])
                tmp++;
            if(i <= tmp && citations.size() - tmp <= i)
                answer = i;
        }
    }
    return answer;
}

int main(void){
    vector<int> citaions = {0, 100, 30, 4, 20, 40, 10, 3, 9, 75};
    cout << solution(citaions) << endl;
    return 0;
}