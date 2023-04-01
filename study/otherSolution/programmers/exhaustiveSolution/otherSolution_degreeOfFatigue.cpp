#include <vector>
#include <iostream>
using namespace std;

int solution(int k, vector<vector<int>> dungeons) {
    int ans = 0;
    for (auto it = dungeons.begin(); it != dungeons.end(); it++) {
        if (k >= (*it)[0]) {
            auto d2 = vector(dungeons.begin(), it);
            d2.insert(d2.end(), it + 1, dungeons.end());

            int s = solution(k - (*it)[1], d2) + 1;
            ans = s > ans ? s : ans;
        }
    }
    return ans;
}

int main(void){
    vector<vector<int>> dd = {{80, 20}, {50, 40}, {30, 10}};
    cout << "sol: " << solution(80, dd);
    return 0;
}