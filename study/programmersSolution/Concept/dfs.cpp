#include <iostream>
#include <vector>
using namespace std;

bool visited[9];
vector<int> graph[9];

void dfs(int x){
    visited[x] = true;
    cout << x << " ";
    for(int i = 0; i < graph[x].size(); i++){ // 안전한 노드 사이즈만큼 탐색
        int y = graph[x][i]; // 연결된 노드
        if(!visited[y]) // 연결된 노드가 방문하지 않았으면 그 안에서 또 dfs 실시!
            dfs(y);
    }
}
int main(void){
    graph[1].push_back(2);
    graph[1].push_back(3);
    graph[1].push_back(8);

    graph[2].push_back(1);
    graph[2].push_back(7);

    graph[3].push_back(1);
    graph[3].push_back(4);
    graph[3].push_back(5);

    graph[4].push_back(3);
    graph[4].push_back(5);

    graph[5].push_back(3);
    graph[5].push_back(4);

    graph[6].push_back(7);

    graph[7].push_back(2);
    graph[7].push_back(6);
    graph[7].push_back(8);

    graph[8].push_back(1);
    graph[8].push_back(7);

    dfs(1);
}