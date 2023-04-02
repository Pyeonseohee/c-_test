#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(void){

    // 5P2 출력 하는 코드
	vector<int> v = {1, 2, 3, 4, 5};
    int n = v.size();  // 5
    int r = 1;
	
	do{
	    string test = "";
        for(int i = 0; i < r; i++){
			test += to_string(v[i]);
        }
        cout << test << endl;

        reverse(v.begin() + r, v.end());
	}while(next_permutation(v.begin(), v.end()));   
    return 0;
}