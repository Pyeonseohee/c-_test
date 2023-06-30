#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    for(int i = 0; i < s.length(); i++){
        if(i == s.length() - 1){
            answer++;
            break;
        }
        char first = s[i];
        int same = 1;
        int diff = 0;
        for(int j = i + 1; j < s.length(); j++){
            if(first == s[j]){
                same++;
            }else{
                diff++;
            }
            if(same==diff){
                i = j;
                answer++;
                break;
            }
        }
    }
    return answer;
}