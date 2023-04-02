#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 0;
    int len = clothes.size();
    answer += len;

    vector<int> count;
    vector<string> kind;
    kind.push_back(clothes[0][1]);
    count.push_back(1);

    for(int i = 1; i < len; i++){
        string clo = clothes[i][1];
        auto idx = find(kind.begin(), kind.end(), clo);
        if(idx == kind.end()) {
            kind.push_back(clo);
            count.push_back(1);
        }else{
            count[idx - kind.begin()]++;
        }
    }

    int num = count.size();
    for(int i = 2; i <= num; i++){
        vector<bool> temp(num, false);
        for(int j = 0; j < i; j++)
            temp[j] = true;
        do{
            int sum = 1;
            for(int j = 0; j < num; j++){
                if(temp[j])
                    sum *= count[j];
            }
            answer += sum;
        }while(prev_permutation(temp.begin(), temp.end()));
    }
    return answer;
}

int main(void){
    vector<vector<string>> c1 = {{"a", "head"}, 
    {"b", "eye"}, {"c", "head"}, {"d", "eye"}, {"e", "face"}, {"f", "head"}};

    vector<vector<string>> c2 = {{"crow_mask", "face"}, 
    {"blue_sunglasses", "face"}, {"smoky_makeup", "face"}};
    solution(c1);

    return 0;
}