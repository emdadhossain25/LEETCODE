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

            if (i == 1 || i == row)
            {
                cout << "*";
            }
            else if (j == 1 || j == column)
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

void invertedHalfPyramid()
{

    // ****
    // ***
    // **
    // *
    // n =4
    int n;

    cin >> n;
    // i is row
    for (int i = 0; i < n; i++)
    {
        // j is column
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
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
    // hollowRectanglePattern();
    invertedHalfPyramid();
    return 0;
}