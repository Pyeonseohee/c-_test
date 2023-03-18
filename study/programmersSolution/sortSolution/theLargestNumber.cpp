#include <algorithm>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

bool compare(const string &a, const string &b)
{
    cout << a << " " << b << endl;
    if (b + a < a + b)
        return true;
    return false;
}

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> strings;
    for (int i : numbers)
        strings.push_back(to_string(i));

    sort(strings.begin(), strings.end(), compare);
    for (auto iter = strings.begin(); iter < strings.end(); iter++){
        answer += *iter;
    }

    // answer의 첫글자가 0이면 그냥 0 반환
    if (answer[0] == '0')
        answer = "0";
    return answer;
}

int main(void)
{
    vector<int> v = {30, 5, 9, 34, 3};
    cout << "sol:" << solution(v) << endl;
    return 0;
}