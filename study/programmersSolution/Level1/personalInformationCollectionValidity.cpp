#include <string>
#include <vector>
#include <map>
using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    int T_yy = stoi(today.substr(0, 4));
    int T_mm = stoi(today.substr(5, 2));
    int T_dd = stoi(today.substr(8, 2));
    vector<int> answer;
    map<char, int> m;
    for(int i = 0; i < terms.size(); i++){
        m.insert(make_pair(terms[i][0], stoi(terms[i].substr(2))));
    }

    for(int i = 0; i < privacies.size(); i++){
        int yy = stoi(privacies[i].substr(0, 4));
        int mm = stoi(privacies[i].substr(5, 2));
        int dd = stoi(privacies[i].substr(8, 2));
        char type = privacies[i][11]; // 약관 종류
        int month = m.find(type)->second; // 약관 종류의 유효기간
        yy += month / 12;
        int add_mm = mm + month % 12;
        if(add_mm > 12){
            yy++;
            mm = add_mm - 12;
        }else{
            mm = add_mm;
        }
        if(dd == 1){
            dd = 28;
            mm--;
        }else dd--;
        if(T_yy > yy) answer.push_back(i + 1);
        else if(T_yy == yy){
            if(T_mm > mm) answer.push_back(i + 1);
            else if(T_mm == mm) if(T_dd > dd) answer.push_back(i + 1);
        }
    }
    return answer;
}