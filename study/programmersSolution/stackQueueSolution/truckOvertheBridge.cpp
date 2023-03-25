#include <string>
#include <vector>
#include <queue>
#include <numeric>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    vector<int> ing;
    ing.push_back(truck_weights[0]);
    for(int i = 1; i < truck_weights.size(); i++){
        int newTruck = truck_weights[i];
        int sum = accumulate(ing.begin(), ing.end(), 0);
        if(sum + newTruck){
            ing.push_back(newTruck);
            
        }
    }


    return answer;
}