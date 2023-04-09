#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int solution(int n, vector<vector<int>> edge) {
    vector<vector<int>> graph(n + 1);
    vector<int> counts(n + 1, 0);
    vector<bool> visited(n + 1, false);
    queue<int> queue;
    int answer = 0;

    return answer;
}

int main(void){
    int n = 6;
    vector<vector<int>> vertex = {{3, 6}, {4, 3}, {3, 2}, {1, 3}, {1, 2}, {2, 4}, {5, 2}};
    solution(n, vertex);
    return 0;
}