#include <string>
#include <vector>
#include <queue>
#include <numeric>
#include <iostream>
using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> scovil;
    for(const int &tmp: scoville)
        scovil.push(tmp);
    
    while(scovil.top() < K){
        if(scovil.size() == 1) return -1;
        int first = scovil.top();
        scovil.pop();
        int second = scovil.top();
        scovil.pop();
        scovil.push(first + second * 2);
        answer++;
    }
    return answer;
}

int main(void){
    vector<int> s = {1, 2, 3, 9, 10, 12};
    int k = 7;
    cout << solution(s, k) << endl;
    return 0;
}
