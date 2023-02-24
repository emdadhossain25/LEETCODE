#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void forLoop(int counter)
{
    int sum = 0;
    for (int i = 1; i <= counter; i++)
    {
        sum += counter;
    }
    cout << sum;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    forLoop(n);
    return 0;
}
