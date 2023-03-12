#include <iostream>
using namespace std;

int fact(int n)
{
    if(n == 1 || n == 0) return 1;
    return n * fact(n - 1);
}

int fact1(int n)
{
    int ret = 1;
    for(int i = 1; i <= n; i++)
    {
        ret *= i;
    }
    return ret;
}

int fibo(int n)
{
    cout << "fibo: " << n << endl;
    if(n == 0 || n == 1) return n;
    return fibo(n - 1) + fibo(n - 2);
}

int n = 4;
int main(void)
{
    cout << fibo(n) << endl;
    return 0;
}