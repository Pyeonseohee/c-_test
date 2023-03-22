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
            //cout << "tmp_k: " << tmp_k << " " << dungeons[i][0] << " " << dungeons[i][1] << endl;
            if(tmp_k >= dungeons[i][0]){
                tmp++;
                tmp_k -= dungeons[i][1];
            }else break;
        }
    }while(next_permutation(dungeons.begin(), dungeons.end()));
    answer = tmp_k;
    return answer;
}

int main(void){
    vector<vector<int>> dd = {{80, 20}, {50, 40}, {30, 10}};
    solution(80, dd);
    return 0;
}