#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int a;
    int div = 2;
    cin >> a;
    while (div < a)
    {
        if (a % 2 == 0)
        {
            cout << a << " is not a prime" << endl;
            return 0;
        }
        ++div;
    }
    cout << a << " is a prime" << endl;
    return 0;
}