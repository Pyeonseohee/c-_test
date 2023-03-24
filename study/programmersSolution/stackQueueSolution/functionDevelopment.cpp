#include <string>
#include <vector>
#include <iostream>
using namespace std;

void printVector(vector<int> v)
{
    for(int i = 0; i < v.size(); i++)
        cout << "v[" << i << "]: " << v[i] << endl;
}

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> count;
    int tmp = 1;
    
    for(int i = 0; i < progresses.size(); i++){
        int progress = 100 - progresses[i];
        count.push_back(progress / speeds[i]);
        if(progress % speeds[i] != 0)
            count[i]++;
    }
    printVector(count);

    for(int i = 0; i < count.size(); i++){
        
    }
    return answer;
} 
int main(void){
    vector<int> p = {95, 90, 99, 99, 80, 99};
    vector<int> s = {1, 1, 1, 1, 1, 1};
    solution(p, s);
    return 0;
}