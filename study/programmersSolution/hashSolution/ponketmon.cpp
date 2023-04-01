#include <vector>
#include <set>
using namespace std;

int solution(vector<int> nums)
{
    int max = nums.size() / 2; // 출력 최댓값 정의
    set<int> s;
    for(const int &num : nums) // 매개변수로 받은 nums를 중복 허용안되는 집합에 대입
        s.insert(num);
    int sLen = s.size();
    if(sLen > max) return max;
    else return sLen;
}