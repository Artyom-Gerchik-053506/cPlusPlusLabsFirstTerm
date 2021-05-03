#include <iostream>
using namespace std;

double formula(double* a, int len)
{
    if (len == 1)
    {
        return sin(*a) * cos(*a);
    }

    int mid = len / 2;
    return formula(a, mid) + formula(a + mid, len - mid);
}