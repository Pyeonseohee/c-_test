#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> v)
{
    for(int i = 0; i < v.size(); i++)
        cout << "v[" << i << "]: " << v[i] << endl;
}

void quickSort(vector<int>& v, int start, int end)
{
    if(start >= end) return;
    int pivot = start;
    int i = start + 1; // high를 찾는 인덱스
    int j = end; // low를 찾는 인덱스

    while(i <= j){
        while(v[i] <= v[pivot] && i <= end) i++; //v[i]가 pivot의 값보다 high한 값을 찾을 때까지
        while(v[j] >= v[pivot] && j > start) j--;
        if(i > j){ // 엇갈리면
            swap(v[j], v[pivot]);
        }else{
            swap(v[j], v[i]);
        }
    }
    quickSort(v, start, j - 1);
    quickSort(v, j + 1, end);
}

int main(void)
{
    vector<int>v = {10, 40, 90, 20, 50};
    quickSort(v, 0, v.size() - 1);
    cout << v.size() - 1;
    printVector(v);
    return 0;
}