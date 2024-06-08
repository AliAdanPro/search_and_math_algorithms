#pragma once
#include <iostream>
using namespace std;

class Power
{
public:
    static double compute(double a, int n)
    {
        if (n == 0)
        {
            return 1;
        }
        else if (n > 0)
        {
            return a * compute(a, n - 1);
        }
        else
        {
            return 1 / (a * compute(a, -n - 1));
        }
    }
};