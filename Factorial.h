#pragma once
#include <iostream>
using namespace std;

class Factorial
{
public:
    static int compute(int n)
    {
        if (n == 0)
        {
            return 1;
        }
        else
        {
            return n * compute(n - 1);
        }
    }
};

