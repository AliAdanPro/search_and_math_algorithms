#pragma once
#include <iostream>
using namespace std;

class Linear
{
public:
    static int linearSearch(int a[], int i, int j, int x)
    {
        if (i == x)
        {
            return i;
        }
        if (a[i] > j)
        {
            return -1;
        }
        return linearSearch(a, i + 1, j, x);
    }
};