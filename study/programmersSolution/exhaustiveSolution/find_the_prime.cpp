#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void printVector(vector<char> v)
{
    for(int i = 0; i < v.size(); i++)
        cout << "v[" << i << "]: " << v[i] << endl;
}

void isPrime(int n){
    bool *isPrime = new bool[n + 1];

    for(int i = 0; i <= n; i++){
        isPrime[i] = true;
    }

    for(int i = 2; i <= n; i++){
        if(isPrime[i]){
            cout << i << " ";
            for(int j = i * 2; j <= n; j += i)
                isPrime[j] = false;
        }
    }
}

int solution(string numbers) {
    int answer = 0;
    vector<char> numChar; 
    string tmp;
    for(const char& i : numbers){
        numChar.push_back(i);
    }
    sort(numChar.begin(), numChar.end());
    printVector(numChar);


    return answer;
}

int main(void){
    string str = "011741";
    solution(str);
    return 0;
}