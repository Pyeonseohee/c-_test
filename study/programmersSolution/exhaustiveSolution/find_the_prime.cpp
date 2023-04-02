#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
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
    if(isPrime[n] == true && (n != 1 && n != 0)) return true;
    else return false;
}  

int solution(string numbers) {
    int answer = 0;
    set<int> findPrime;
    sort(numbers.begin(), numbers.end());

    for(int i = 1; i <= numbers.length(); i++){
        do{
             string test = "";
            for(int j = 0; j < i; j++)
                test += numbers[j];
            reverse(numbers.begin() + i, numbers.end());
            findPrime.insert(stoi(test));
        }while(next_permutation(numbers.begin(), numbers.end()));   
    }
    for(const auto &tmp: findPrime)
        if(isPrime3(tmp)) answer++;
    return answer;
}

int main(void){
    string str = "013";
    cout << solution(str) << endl;
    return 0;
}