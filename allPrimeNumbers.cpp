#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    while (n > 1)
    {
        int div = 2;
        while (div < n)
        {
            if (n % div == 0)
            {
                break;
            }
            ++div;
        }
        if (div == n)
        {
            cout << n << " is a prime " << endl;
        }
        --n;
    }

    return 0;
}