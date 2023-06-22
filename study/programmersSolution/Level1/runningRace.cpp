#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    for(int i = 0; i < callings.size(); i++){
        vector<string> tmp;
        for(int j = 0; j < players.size(); j++){
            if(callings[i] == players[j]){
                tmp.push_back(callings[i]);
                tmp.push_back(players[j - 1]);
            }else{
                tmp.push_back(players[j]);
            }
        }
        players = tmp;
    }
    answer = players;
    return answer;
}