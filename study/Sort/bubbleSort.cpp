// Bubble sort c++로 구현하기
#include <iostream>
using namespace std;
void printArray(int *array, int length); // 배열요소 print
void swapping(int *a, int *b); // 두 개의 매개변수 swap
void bubbleSortAsc(int *array, int leght); // bubble sort 오른차순

void printArray(int *array, int length)
{
    for(int i = 0; i < length; i++)
        cout << array[i] << " ";
    cout << endl;
}

void bubbleSortAsc(int *array, int length)
{
    for(int i = length; i > 1; i--)
    {
        for(int j = 0; j < i - 1; j++)
        {
            if(array[j] > array[j + 1])
                swapping(&array[j], &array[j + 1]);
        }
    }

}

void swapping(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void)
{
    int arr[10] = {30, 100, 90, 0, 10, 20, 50, 40, 80, 70};
    int len = sizeof(arr) / sizeof(int); // 배열의 크기

    cout << "-----Before sorting-----" << endl;
    printArray(arr, len);

    bubbleSortAsc(arr, len);
    cout << "-----After sorting-----" << endl;
    printArray(arr, len);
    return 0;
}