#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a, b, c;
    cin>>a;
    cin>>b;
    c = a > b ? a - b : b - a;
    cout << c << endl;
    return 0;
}