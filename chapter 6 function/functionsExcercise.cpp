#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int32_t sumOfNaturalNUmbers(int n)
{
    return n * (n + 1) / 2;
}

bool pythogorianTriplet(int x, int y, int z)
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

    return (pow(a, 2) == (pow(b, 2) + pow(c, 2)));
}

int32_t main()
{
    // int n;
    // cin >> n;
    // cout << sumOfNaturalNUmbers(n) << endl;

    int x,y,z;
    cin>>x>>y>>z;
    cout<<pythogorianTriplet(x,y,z)<<endl;
    return 0;
}