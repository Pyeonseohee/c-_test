#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(int k, vector<vector<int>> dungeons) {
    int answer = -1;
    int tmp_k = 0;
    vector<int> answerArr;
    sort(dungeons.begin(), dungeons.end());
    do{
        int tmp = 0;
        tmp_k = k;
        for(int i = 0; i < dungeons.size(); i++){
            if(tmp_k >= dungeons[i][0]){
                tmp++;
                tmp_k -= dungeons[i][1];
            }else break;
        }
        answerArr.push_back(tmp);
    }while(next_permutation(dungeons.begin(), dungeons.end()));
    answer = *max_element(answerArr.begin(), answerArr.end());
    return answer;
}

int main(void){
    vector<vector<int>> dd = {{80, 20}, {50, 40}, {30, 10}};
    cout << "sol: " << solution(80, dd);
    return 0;
}