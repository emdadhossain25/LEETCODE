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
    for (int i = 1; i <= row; ++i)
    {
        for (int j = 1; j <= column; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void hollowRectanglePattern()
{

    // ****
    // *  *
    // *  *
    // *  *
    // ****
    // rows 5, column 4

    int row, column;
    cin >> row >> column;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= column; j++)
        {

            if (j == 1 || i == 1 || j == column || i == row)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
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
    // simpleRectanglePattern();
    hollowRectanglePattern();
    return 0;
}