#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int amount1;
    int amount2;
    cin >> amount1;
    cin >> amount2;
    int sum = amount1 + amount2;
    cout << sum << endl;
    return 0;
}