#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime3(int n){
    bool *isPrime = new bool[n + 1];

    for(int i = 0; i <= n; i++){
        isPrime[i] = true;
    }

    for(int i = 2; i <= n; i++){
        if(isPrime[i]){
            for(int j = i * 2; j <= n; j += i)
                isPrime[j] = false;
        }
    }
    if(isPrime[n] == true) return true;
    else return false;
}  

int solution(string numbers) {
    int answer = 0;
    string test;
    // vector<char> numChar;
    // for(const char& i : numbers)
    //     numChar.push_back(i);
    sort(numbers.begin(), numbers.end());

    do{
        test = "";
        cout << numbers << endl;

        
       //for(const auto tmp: numChar) test += tmp;
       //cout << test << endl;
       //if (isPrime3(stoi(test))) answer++;
    }while(next_permutation(numbers.begin(), numbers.end()));

    return answer;
}

int main(void){
    string str = "011741";
    solution(str);
    return 0;
}