#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> triangle) {
    int answer = 0;
    int size = triangle.size();

    vector<vector<int>> sum(size);
    sum[0].push_back(triangle[0][0]);

    for(int i = 1; i < size; i++){
        int len = triangle[i].size();
        for(int j = 0; j < len; j++){
            if(j == 0){
                sum[i].push_back(sum[i - 1][0]);
            }else if(j == len - 1){
                sum[i].push_back(sum[i - 1][j - 1]);
            }else{
                sum[i].push_back(max(sum[i - 1][j], sum[i - 1][j - 1]));
            }
            sum[i][j] += triangle[i][j];
        }
    }
    
    answer = *max_element(sum[size - 1].begin(), sum[size - 1].end());
    return answer;
}

int main(void){
    vector<vector<int>> t = {{7}, {3, 8}, {8, 1, 0}, {2, 7, 4, 4}, {4, 5, 2, 6, 5}};
    cout << solution(t) << endl;
}