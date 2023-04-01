#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

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
    string test;
    vector<char> numChar; 
    string tmp;
    for(const char& i : numbers)
        numChar.push_back(i);
    sort(numChar.begin(), numChar.end());

    do{
        test = "";
       for(auto tmp: numChar) test += tmp;
       if (isPrime(stoi(test))) answer++;
    }while(next_permutation(numChar.begin(), numChar.end()));

    return answer;
}

int main(void){
    string str = "011741";
    solution(str);
    return 0;
}