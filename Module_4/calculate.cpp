#include "calculate.h"

long long Add (int a, int b)
{
	return a + b;
}

long long Sub(int a, int b)
{
	return a - b;
}

long long Mul(int a, int b)
{
	return a * b;
}

long long Div(int a, int b)
{
	return a / b;
}

long long Pow(int a, int b)
{
    if (b == 0)
        return 1;
    else if (b == 1)
        return a;
    else if (b % 2 == 0)
        return Pow(a * a, b / 2);
    else
        return Pow(a * a, b / 2) * a;
}

long long Fac(int a)
{
    if (a > 1)
        return a * Fac(a - 1);
    return 1;
}