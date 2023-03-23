#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    vector<int> widthArr;
    vector<int> heightArr;

    for(int i = 0; i < sizes.size(); i++){
        widthArr.push_back(*max_element(sizes[i].begin(),sizes[i].end()));
        heightArr.push_back(*min_element(sizes[i].begin(), sizes[i].end()));
    }
    int width = *max_element(widthArr.begin(), widthArr.end());
    int height = *max_element(heightArr.begin(), heightArr.end());
    answer = width * height;
    return answer;
}

int main(void){
    vector<vector<int>> sizes = {
       {60, 50}, {30, 70}, {60, 30}, {80, 40}
    };
    cout << solution(sizes) << endl;
    return 0;
}