#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, k;
    cin >> n >> k;
    while (k >= n)
    {
        int div = 2;
        while (div < k)
        {
            if (k % div == 0)
            {
                break;
            }
            ++div;
        }
        if (div == k)
        {
            cout << k << " is a prime number" << endl;
        }
        k--;
    }

    return 0;
}