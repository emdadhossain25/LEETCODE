#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int32_t sumOfNaturalNUmbers(int n)
{
    return n * (n + 1) / 2;
}

void pythogorianTriplet(int x, int y, int z)
{
    int a = max(x, max(y, z));
    int b, c;
    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }

    if (pow(a, 2) == (pow(b, 2) + pow(c, 2)))
    {
        cout << "Pythogorean Triplet";
    }
    else
    {
        cout << "Not Pythogorean Triplet";
    }
}

int32_t main()
{
    // int n;
    // cin >> n;
    // cout << sumOfNaturalNUmbers(n) << endl;

    int x, y, z;
    cin >> x >> y >> z;
    pythogorianTriplet(x, y, z);
    return 0;
}