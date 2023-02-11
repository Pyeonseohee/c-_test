#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

char* MakeStrAdr(int len){
    char* str = (char *)malloc(sizeof(char) * len); // 문자열 저장을 위한 배열을 heap영역에 할당
    return str;
}

int main(void){
    char* str = MakeStrAdr(20);
    strcpy(str, "I am so happy!");
    cout << str << endl;
    free(str); // heap에 할당된 메모리 공간을 소멸
    return 0;
}