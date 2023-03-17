#include <iostream>
using namespace std;
void printArray(int *array, int length); // 배열요소 print
void swapping(int *a, int *b); // 두 개의 매개변수 swap

void printArray(int *array, int length)
{
    for(int i = 0; i < length; i++)
        cout << array[i] << " ";
    cout << endl;
}

void swapping(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}