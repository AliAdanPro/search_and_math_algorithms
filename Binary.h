#pragma once
#include <iostream>
using namespace std;

class Binary
{
public:
    static int binarySearch(int arr[], int i, int j, int x)
    {
        if (i <= j)
        {
            int m = (i + j) / 2;
            if (x == arr[m])
            {
                return m;
            }
            else if (x < arr[m])
            {
                return binarySearch(arr, i, m - 1, x);
            }
            else
            {
                return binarySearch(arr, m + 1, j, x);
            }
        }
        return -1; 
    }
};