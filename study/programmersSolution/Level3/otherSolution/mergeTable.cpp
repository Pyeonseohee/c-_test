#include <string>
#include <vector>
#include <iostream>
using namespace std;

// string split with divide
vector<string> split(string cmd, char divide){
    string tmp = "";
    vector<string> result;
    for(int i = 0; i < cmd.length(); i++){
        if(cmd[i] == divide){
            result.push_back(tmp);
            tmp = "";
        }else if(i == cmd.length() - 1){
            tmp += cmd[i];
            result.push_back(tmp);
        }else tmp += cmd[i];
    }
    return result;
}

// matrix to idx(1-demension array)
int transIdx(string s1, string s2){
    int n1 = stoi(s1);
    int n2 = stoi(s2);
    return (50 * (n1 - 1)) + n2;
}

vector<string> solution(vector<string> commands) {
    vector<string> answer;
    vector<string> cmd;
    int link[2501];
    string value[2501];
    
    // matrix init
    for(int i = 1; i < 2501; i++){
        link[i] = i;
        value[i] = "EMPTY";
    }
    
    for(int i = 0; i < commands.size(); i++){
        cmd = split(commands[i], ' ');
        if(cmd[0] == "UPDATE" && cmd.size() == 4){
            int idx = transIdx(cmd[1], cmd[2]);
            int parent = link[idx];
            value[parent] = cmd[3];
        }else if(cmd[0] == "UPDATE" && cmd.size() == 3){
            for(int i = 1; i < 2501; i++){
                if(value[i] == cmd[1]) value[i] = cmd[2];
            }
        }else if(cmd[0] == "MERGE"){
            int idx1 = transIdx(cmd[1], cmd[2]);
            int idx2 = transIdx(cmd[3], cmd[4]);
            int parent1 = link[idx1];
            int parent2 = link[idx2];
            if(parent1 != parent2){
                for(int i = 1; i < 2501; i++){
                    if(link[i] == parent2) link[i] = parent1;
                }
                if(value[parent1] == "EMPTY" && value[parent2] != "EMPTY"){
                    value[parent1] = value[parent2];
                }else {
                    value[parent2] = value[parent1];
                }
            }
            
        }else if(cmd[0] == "UNMERGE"){
            int idx = transIdx(cmd[1], cmd[2]);
            int parent = link[idx];
            string val = value[parent];
            for(int i = 1; i < 2501; i++){
                if(link[i] == parent){
                    link[i] = i;
                    value[i] = "EMPTY";
                }
            }
            value[idx] = val;
            
        }else if(cmd[0] == "PRINT"){
            int idx = transIdx(cmd[1], cmd[2]);
            int parent = link[idx];
            answer.push_back(value[parent]);
        }
    }
    return answer;
}