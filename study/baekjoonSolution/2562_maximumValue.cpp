#include<iostream>
int max, idx;
main(){
    int num;
    for(int i = 1; i < 10; i++){
        std::cin >> num;
        if(max < num){
            max = num;
            idx = i;
        }
    }
    std::cout << max << "\n" << idx;
}