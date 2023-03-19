#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct Student{
  int count;
  vector<int> ans; 
};

vector<int> solution(vector<int> answers){
  vector<int> answer;
  vector<int> tmp;
  vector<Student> student = {{0, {1, 2, 3, 4, 5}}, {0, {2, 1, 2, 3, 2, 4, 2, 5}}, {0, {3, 3, 1, 1, 2, 2, 4, 4, 5, 5}}};

  for(int i = 0; i < answers.size(); i++){
    for(auto &stu: student){
      if(answers[i] == stu.ans[i % stu.ans.size()])
        stu.count++;
    }
  }

  for(const auto stu: student)
    tmp.push_back(stu.count);

  int max = *max_element(tmp.begin(), tmp.end());
  for(int i = 0; i < tmp.size(); i++){
    if(tmp[i] == max) answer.push_back(i + 1);
  }
  return answer;
}