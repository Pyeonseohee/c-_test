// Bubble sort c++로 구현하기
#include <iostream>
#include "../myLibrary/sorting.cpp" // 정수 swap과 정수 배열 출력
using namespace std;

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