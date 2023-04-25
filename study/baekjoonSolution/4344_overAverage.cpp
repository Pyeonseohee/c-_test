#include <iostream>
using namespace std;

int main(void){
    int a, b;
    scanf("%d", &a);
    for(int i = 0; i < a; i++){
      int t = 0;
      int s[1000];
        scanf("%d", &b);
        cout << "b: "<< b << endl;
        for(int j = 0; j < b; j++){
            scanf("%d", &s[j]);
          cout << "s[j]: " << s[j] << endl;
            t += s[j];
        }
        cout << "t: " << t << endl;
        double avg = (double)t / b;
        cout << "avg: " << avg << endl;
        int count = 0;
        for(int j = 0; j < b; j++)
            if(s[j] > avg) count++;
        double p = count / b;
        cout << p << endl;
    }
    return 0;
}