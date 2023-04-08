#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long solution(int n, vector<int> times) {
    long long answer = 0;
    sort(times.begin(), times.end());

    long long min = 1;
    long long max = n * (long long)times.back();

    while(min <= max){
        long long tmp = 0;
        long long mid = (min + max) / 2;

        for(int i = 0; i < times.size(); i++)
            tmp += mid / (long long)times[i];

        if(tmp < n)
            min = mid + 1;
        else{
            max = mid - 1;
            answer = mid;
        }
    }
    return answer;
}