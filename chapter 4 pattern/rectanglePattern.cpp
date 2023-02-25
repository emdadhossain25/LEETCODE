#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void simpleRectanglePattern()
{
    // ****
    // ****
    // ****
    // ****
    // ****
    // rows 5, column 4

    int row, column;
    cin >> row >> column;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    simpleRectanglePattern();

    return 0;
}