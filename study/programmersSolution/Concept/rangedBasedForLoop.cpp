// 범위 기반 for 루프 : array, vector, list, set, map과 같은 구조에서도 작동.
#include <iostream>
using namespace std;

int main(void)
{
    int array1[] = {11, 100, 22, 53, 78};
    int array2[] = {10, 60, 20, 0};
    for(int element : array1)
        cout << element << " ";
    cout << endl;

    for(auto num : array2)
        cout << num << " ";

    // 근데 이렇게 읽어들이면 반복된 각 배열 요소가 element에 복사됨.
    // 이는 메모리 비용이 들 수 있으므로 참조를 사용해서 하면 좋음.
    // 참조를 할 시에는 복사되지 않고 참조한 변수를 변경하면 변경됨.
    // 읽기 전용은 const auto&가 제일 좋음!!
    return 0;
}