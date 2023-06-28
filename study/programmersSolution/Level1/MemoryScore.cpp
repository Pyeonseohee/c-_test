#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    int sum;
    vector<int> answer;
    map<string, int> m;

    for(int i = 0; i < name.size(); i++){
        m.insert({name[i], yearning[i]});
    }

    for(int i = 0; i < photo.size(); i++){
        sum = 0;
        for(int j = 0; j < photo[i].size(); j++){
            auto it = m.find(photo[i][j]);
            if(it != m.end()){
                sum += it->second;
            }
        }
        answer.push_back(sum);
    }
    return answer;
}