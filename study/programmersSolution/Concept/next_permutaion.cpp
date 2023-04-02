#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

// nP0 ~ nPn 출력하기
int main(void){
	vector<int> v = {0, 1, 2, 3, 4};
    int n = v.size();  // 5
    int r = 1;
	
    for(int r = 1; r < v.size(); r++){
        do{
            string test = "";
            for(int i = 0; i < r; i++){
                test += to_string(v[i]);
            }
            cout << test << endl;

            reverse(v.begin() + r, v.end());
        }while(next_permutation(v.begin(), v.end()));   
    }

    return 0;
}