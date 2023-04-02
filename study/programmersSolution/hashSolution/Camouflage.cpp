#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 0;
    int len = clothes.size();
    answer += len;

    vector<int> count;

    for(int i = 0; i < len; i++){
        // 어떻게 구별해서 넣을건데?
    }

    return answer;
}

int main(void){
    vector<vector<string>> c1 = {{"yellow_hat", "headgear"}, 
    {"blue_sunglasses", "eyewear"}, {"green_turban", "headgear"}};

    vector<vector<string>> c2 = {{"crow_mask", "face"}, 
    {"blue_sunglasses", "face"}, {"smoky_makeup", "face"}};
    solution(c1);

    return 0;
}