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
void invertedPattern()
{
    // 1 2 3 4 5
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void _01Pattern()
{
    // 1
    // 0 1
    // 1 0 1
    // 0 1 0 1
    // 1 0 1 0 1
    int n;
    cin >> n;

    // checking for even column and rows
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "1 ";
            }
            else
            {

                cout << "0 ";
            }
        }
        cout << endl;
    }
}

void rhombusPattern()
{
    //
    //     * * * * * 1 (5 spaces 5 stars)
    //    * * * * *  2
    //   * * * * *   3
    //  * * * * *    4
    // * * * * *     5

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // boundary for columns is dynamic for each row
        for (int j = 1; j <= (2 * n) - i; j++)
        {
            if (j <= n - i)
            {
                cout << " ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
}
void numberPattern()
{
    //
    //     1 (4 spaces)
    //    1 2
    //   1 2 3
    //  1 2 3 4
    // 1 2 3 4 5

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << " ";
            }
            else
            {
                cout << j + i - n << " ";
            }
        }
        cout << endl;
    }
}
void pallindromicPattern()
{
    //        1
    //      2 1 2
    //    3 2 1 2 3
    //  4 3 2 1 2 3 4
    // 5 4 3 2 1 2 3 4 5

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int j;
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // descending
        int k = i;
        for (; j <= n; j++)
        {
            cout << k << " ";
            k--;
        }

        // ascending
        k = 2;
        for (; j < n + i - 1; j++)
        {
            cout << k << " ";
            k++;
        }

        cout << endl;
    }
}
void starPattern()
{
    //        *
    //      * * *
    //    * * * * *
    //  * * * * * * *
    //  * * * * * * *
    //    * * * * *
    //      * * *
    //        *

    int n;
    cin >> n;
    for(int row=1;row<=n;row++){
        int col;
        for ( col = 1; col <= n-row; col++)
        {
            cout<<" ";
        }
        for(;col<=n+row-1;col++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int row=n;row>=1;row--){
        int col;
        for ( col = 1; col <= n-row; col++)
        {
            cout<<" ";
        }
        for(;col<=n+row-1;col++){
            cout<<"*";
        }
        cout<<endl;
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
    // butterflyPatter();
    // invertedPattern();
    // _01Pattern();
    // rhombusPattern();
    // numberPattern();
    // pallindromicPattern();
    starPattern();
    return 0;
}