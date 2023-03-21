#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(int k, vector<vector<int>> dungeons) {
    int answer = -1;
    sort(dungeons.begin(), dungeons.end());
    do{
        int tmp = 0;
        int tmp_k = k;
        for(int i = 0; i < dungeons.size(); i++){
            cout << dungeons[i][0] << " " << dungeons[i][1] << endl;
            if(tmp_k >= dungeons[i][0]){
                tmp++;
                tmp_k -= dungeons[i][1];
            }
            break;
        }
        cout << tmp << endl;
    }while(next_permutation(dungeons.begin(), dungeons.end()));
    return answer;
}

int main(void){
    vector<vector<int>> dd = {{80, 20}, {50, 40}, {30, 10}};
    solution(80, dd);
    return 0;
}