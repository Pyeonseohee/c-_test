#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

void printV(vector<int> &v){
  for (int i = 0; i < v.size(); i++)
    cout << v[i] << ' ';
  cout << '\n';
}

int main() {
  int a[3] = {1, 2, 3};
  vector<int> v;

  // 1, 2, 3부터 오름차순으로 순열 뽑음.
  for (int i = 0; i < 3; i++)
    v.push_back(a[i]);

  do{
    printV(v);
  }while(next_permutation(v.begin(), v.end()));
  // end()는 해당 리스트의 마지막 요소보다 한칸 뒤의 주솟값을 가르킴.
  cout << "--------------------" << endl;
  v.clear();

  // 3, 2, 1부터 내림차순으로 순열 뽑음.
  for(int i = 2; i >= 0; i--)
    v.push_back(a[i]);
  do{
    printV(v);
  }while(prev_permutation(v.begin(), v.end()));

cout << "--------------------" << endl;

// 배열의 시작부터 시작 + 1까지의 값만 순열 적용
  do{
    printV(v);
  }while(prev_permutation(v.begin(), v.begin() + 2));

  return 0;
}