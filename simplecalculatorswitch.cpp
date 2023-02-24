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
    char c;
    cin >> n >> k;
    cin >> c;
    switch (c)
    {
    case '+':
        cout << n + k << endl;
        break;

    case '-':
        cout << n - k << endl;
        break;

    case '/':
        cout << n / k << endl;
        break;

    case '*':
        cout << n * k << endl;
        break;

    default:
        cout << "enter another operator" << endl;
        break;
    }
    return 0;
}