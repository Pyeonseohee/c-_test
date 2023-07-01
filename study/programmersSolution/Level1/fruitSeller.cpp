#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    sort(score.begin(), score.end());

    for(int i = score.size() - 1; i >= m - 1; i -= m){
        int minimum = k;
        for(int j = 0; j < m; j++)
            minimum = min(minimum, score[i - j]);
        answer += minimum * m;
    }
    return answer;
}