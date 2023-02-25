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

    // **** 4
    // *** 3
    // ** 2
    // * 1
    // n =4
    int n;

    cin >> n;

    // i is the row
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void halfPyr180rotation()
{

    //    * 1
    //   ** 2
    //  *** 3
    // **** 4
    //***** 5
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    { // row
        for (int j = 1; j <= n; j++)
        { // col
            if (j <= n - i)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
}

void halfPyrUsinNumber()
{

    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    // 5 5 5 5 5
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    { // row
        for (int j = 1; j <= i; j++)
        { // col
            cout << " " << i;
        }
        cout << endl;
    }
}

void froidsTriangle()
{

    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    // 11 12 13 14 15
    int n;
    cin >> n;
    int count = 0;
    ;
    for (int i = 1; i <= n; i++)
    { // row
        for (int j = 1; j <= i; j++)
        { // col
            count += 1;
            cout << " " << count;
        }
        cout << endl;
    }
}
void butterflyPatter()
{

    // *        *
    // **      **
    // ***    ***
    // ****  ****
    // **********
    // **********
    // ****  ****
    // ***    ***
    // **      **
    // *        *
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    { // row

        for (int j = 1; j <= 2 * n; j++)
        {
            if (j <= i)
            {
                cout << "* ";
            }
            else if (j <= 2 * n - i)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }

        cout << endl;
    }

    for (int i = n; i >= 1; i--)
    { // row

        for (int j = 1; j <= 2 * n; j++)
        {
            if (j <= i)
            {
                cout << "* ";
            }
            else if (j <= 2 * n - i)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
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
    // hollowRectanglePattern();
    // invertedHalfPyramid();
    // halfPyr180rotation();
    // halfPyrUsinNumber();
    // froidsTriangle();
    butterflyPatter();
    return 0;
}