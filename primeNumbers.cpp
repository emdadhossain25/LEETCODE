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
    int div = 2;
    while (div < n)
    {
        if (n % div == 0)
        {
            cout << "not a prime " << n << endl;
            break; // break out of the loop
        }
        ++div;
    }
    if (div == n) // check if iteration completed
    {
        cout << "prime number " << n;
    }

    return 0;
}