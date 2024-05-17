#pragma once
#include "Utils.h"
using namespace std;

template <typename T>
void bubbleSort(T arr[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

template <>
void bubbleSort(complexNumber arr[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (arr[j].real > arr[j + 1].real ||
                (arr[j].real == arr[j + 1].real && arr[j].imag > arr[j + 1].imag)) 
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}