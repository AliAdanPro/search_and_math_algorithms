#pragma once
#include <iostream>
using namespace std;

class Fibonacci
{
public:
    static int compute(int n)
    {
        if (n == 0)
        {
            return 0;
        }
        else if (n == 1)
        {
            return 1;
        }
        else
        {
            return compute(n - 1) + compute(n - 2);
        }
    }
};