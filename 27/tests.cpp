#include <bits/stdc++.h>

using namespace std;

int f(int x, int *py, int **ppz)
{
    int y, z;
    **ppz += 1;
    z = **ppz;
    *py += 2;
    y = *py;
    x += 3;
    return x + y + z;
}

int main()
{
    int ***r, **q, *p, i = 8;
    p = &i;
    (*p)++;
    q = &p;
    (**q)++;
    r = &q;
    cout << *p << " " << **q << " " << ***r;
    return 0;
}