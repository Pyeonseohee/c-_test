#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void printVector(vector<int> v)
{
    for(int i = 0; i < v.size(); i++)
        cout << "v[" << i << "]: " << v[i] << endl;
}

int solution(vector<int> citations)
{
    int answer = 0;
    sort(citations.begin(), citations.end());
    if (citations[0] >= citations.size()) return citations.size();
    for(int i = 0; i < citations.size(); i++)
    {
        //citation[i] = h꼴
        if (i <= citations[i] && citations[i] <= citations.size() - i)
        {
            answer = citations[i];
        }
    }
    return answer;
}

int main(void)
{
    vector<int> citaions = {100, 100, 100, 99};
    cout << solution(citaions) << endl;
    return 0;
}