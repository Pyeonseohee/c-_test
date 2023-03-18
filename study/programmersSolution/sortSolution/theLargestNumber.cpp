#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void printVector(vector<int> v)
{
    for(int i = 0; i < v.size(); i++)
        cout << "v[" << i << "]: " << v[i] << endl;
}

void printVector(vector<string> v)
{
    for(int i = 0; i < v.size(); i++)
        cout << "v[" << i << "]: " << v[i] << endl;
}

vector<string> intToString(vector<int> v)
{
    vector<string> strV;
    for(int i = 0; i < v.size(); i++)
        strV.push_back(to_string(v[i]));
    return strV;
}

bool compare(string s1, string s2)
{
    if(s1[0] == s2[0])
    {
        if(s1[s1.length() - 1] > s2[s2.length() - 1] && s1[s1.length() - 1] <= s1[0])
            return s1 > s2;
    }
    return s1 < s2;
}

int main(void)
{
    string answer ="";
    vector<int> numbers = {3, 30, 34, 5, 9};
    vector<string> numbersToString;
    numbersToString = intToString(numbers);
    sort(numbersToString.begin(), numbersToString.end(), compare);
    for(int i = numbersToString.size() - 1; i >= 0; i--)
    {
        answer.append(numbersToString[i]);
    }
    return 0;
}