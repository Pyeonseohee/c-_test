#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    for(int i = 0; i < callings.size(); i++){
        for(int j = 0; j < players.size(); j++){
            if(callings[i] == players[j]){
                players[j] = players[j - 1];
                players[j - 1] = callings[i];
            }
        }
    }
    answer = players;
    return answer;
}