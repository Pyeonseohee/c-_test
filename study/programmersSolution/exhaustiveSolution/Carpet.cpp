#include <string>
#include <vector>
using namespace std;

vector<int> best_factor(int a){
    vector<int> divisor;
    for(unsigned int i = 1; i * i <= a; i++){
        if(i * i == a){
            divisor.push_back(i);
        }else if(a % i == 0){
            divisor.push_back(i);
            divisor.push_back(a / i);
        }
    }
    return divisor;
}

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    vector<int> tmp;
    tmp = best_factor(yellow);

    for(int i = 0; i < tmp.size(); i += 2)
    {
        int x = 0;
        int y = 0;
        if(tmp[i] * tmp[i] == yellow){
            x = tmp[i];
            y = tmp[i];
            i--;
        }else{
            y = tmp[i]; // 세로
            x = tmp[i + 1]; // 가로
        }

        if(x * 2 + y * 2 + 4 == brown){
            answer.push_back(x + 2);
            answer.push_back(y + 2);
            break;
        }
    }
    return answer;
}