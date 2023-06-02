#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

void printBinary(vector<int> b) {
  while (!b.empty()) {
    cout << b.back();
    b.pop_back();
  }
  cout << "\n";
}

bool checkEmpty(vector<int> b, long long start, long long end) {
  if (start < end) {
    long long centerIdx = (end + start) / 2;
    if (!b[centerIdx] && (b[centerIdx - 1] != 0 || b[centerIdx - 1] != 0)) { // 중심이 비어있으면
      return 1;
    } else {
      return checkEmpty(b, start, centerIdx - 1) +
             checkEmpty(b, centerIdx + 1, end);
    }
  } else {
    return 0;
  }
}

vector<int> solution(vector<long long> numbers) {
  vector<int> answer;
  for (int i = 0; i < numbers.size(); i++) {
    vector<int> binary;
    long long tmp = numbers[i];
    while (tmp != 0) {
      if (tmp % 2 == 0)
        binary.push_back(0);
      else
        binary.push_back(1);
      tmp /= 2;
    }

    // 맨 왼쪽에 더미 노드 안 채워졌을 때
    if (binary.size() % 2 == 0)
      binary.push_back(0);
    answer.push_back(checkEmpty(binary, 0, binary.size() - 1) > 0? 0 : 1);
  }
  return answer;
}

int main(void) {
  vector<long long> numbers = {63, 111, 95};
  solution(numbers);
  return 0;
}