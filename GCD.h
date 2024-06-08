#pragma once
#include <iostream>
using namespace std;

class GCD
{
public:
    static int compute(int a, int b)
    {
        if (a > b)
        {
            swap(a, b);
        }
        if (a == 0)
        {
            return b;
        }
        else
        {
            return compute(b % a, a);
        }
    }
};
