#include <iostream>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> stu;
    stu.assign(n, 1);
    
    for(const int &tmp : reserve)
        stu[tmp - 1]++;
    for(const int &tmp : lost)
        stu[tmp - 1]--;
    
    for(int i = 0; i < stu.size(); i++){
        if(stu[i] == 1 || stu[i] == 2) answer++;
        else if(stu[i] == 0){
            if(stu[i - 1] == 2) answer++;
            else if(stu[i + 1] == 2){
                stu[i + 1]--;
                answer++;
            }
        }
        
    }
    return answer;
}