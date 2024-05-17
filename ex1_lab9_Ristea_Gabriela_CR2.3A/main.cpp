#include <iostream>
#include <vector>
#include "Sort.h"
#include "Utils.h"
using namespace std;

int main() 
{
 
    int intArr[] = { 3, 1, 4, 1, 5, 9, 2, 6, 5 };
    int n = sizeof(intArr) / sizeof(intArr[0]);
    bubbleSort(intArr, n);
    cout << "Sorted intArr: ";
    for (int i = 0; i < n; i++)
    {
        cout << intArr[i] << " ";
    }
    cout << endl;

    complexNumber complexArr[] = { {1.0, 2.0}, {3.0, 4.0}, {1.0, 1.0}, {2.0, 1.0} };
    n = sizeof(complexArr) / sizeof(complexArr[0]);
    bubbleSort(complexArr, n);
    cout << "Sorted complexArr: ";
    for (int i = 0; i < n; i++) 
    {
        cout << "(" << complexArr[i].real << ", " << complexArr[i].imag << ") ";
    }
    cout << endl;

    string stringArr[] = { "car", "apple", "app", "carrot" };
    n = sizeof(stringArr) / sizeof(stringArr[0]);
    bubbleSort(stringArr, n);
    cout << "Sorted stringArr: ";
    for (int i = 0; i < n; i++) 
    {
        cout << stringArr[i] << " ";
    }
    cout << endl;

    return 0;
}