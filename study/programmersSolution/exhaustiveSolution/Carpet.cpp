#include <string>
#include <vector>
using namespace std;

vector<int> best_factor(int a){
    vector<int> divisor;
    if(a <= 0) return ;
    for(int i = 1; i * i <= a; i++){
        if(i * i == a){
            divisor.push_back(i);
        }else if(a % i == 0){
            divisor.push_back(i);
            divisor.push_back(a / i);
        }
    }
}

vector<int> solution(int brown, int yellow) {
    vector<int> answer;

    
    return answer;
}