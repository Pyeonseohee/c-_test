#include <iostream>
using namespace std;

int main(void){
    int a;
    scanf("%d", &a);

    for(int i = 0; i < a; i++){
        char s[81];
        scanf("%s", s);
        int j = 0;
        int count = 0;
        int sum = 0;

        while(s[j] != '\0'){
            if(s[j] == 'X') count = 0;
            else sum += ++count;
            j++;
        }
        printf("%d\n", sum);
    }
    return 0;
}