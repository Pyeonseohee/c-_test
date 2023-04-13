#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

// 노드를 전부 방문했는지 확인하는 함수.
// 노드를 전부 방문했다면 return n;
// 노드를 전부 방문하지 못했다면 방문하지 못한 노드 중 제일 작은 노드 값 return;
int check(vector<bool> visit){
    int i;
    for(i = 0; i < visit.size(); i++){
        if(visit[i] == false) break;
    }
    return i;
}

int solution(int n, vector<vector<int>> computers) {
    vector<vector<int>> matrix(n);
    vector<bool> visited(n, false);
    queue<int> q;
    int answer = 1;

    for(int i = 0; i < computers.size(); i++){
        for(int j = 0; j < computers[i].size(); j++){
            if(computers[i][j] == 1 && i != j)
                matrix[i].push_back(j);
        }
    }
    q.push(0);
    visited[0] = true;

    while(!q.empty() || check(visited) != n){
        if(q.empty()){
            answer++;
            int tmp = check(visited);
            q.push(tmp);
            visited[tmp] = true;
        }else{
            int x = q.front();
            q.pop();
            for(int i = 0; i < matrix[x].size(); i++){
                int y = matrix[x][i];
                if(!visited[y]){
                    q.push(y);
                    visited[y] = true;
                }
            }
        }
    }
    return answer;
}

int main(void){
    int n1 = 3;
    vector<vector<int>> c1 = {{1, 1, 0}, {1, 1, 1}, {0, 1, 1}};
    cout << solution(n1, c1) << endl; 
    return 0;
}