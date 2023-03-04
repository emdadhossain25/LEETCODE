#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void factorialSum(int n)
{

    int factorial = 0;
    while (n)
    {
        factorial += n;
        n--;
    }
    cout << factorial << endl;
}

bool isPrime(int num)
{
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

void fibonacci(int n)
{
    // 0 1
    // n will the length of series

    // these are always given
    int t1 = 0;
    int t2 = 1;
    int nextTerm;

    for (int i = 1; i <= n; i++)
    {
        cout << t1 << endl; // print terms
        nextTerm = t1 + t2; // next item with previous sums
        t1 = t2;            // increasing last index
        t2 = nextTerm;      // increase immediate last index
    }
}

int factorial(int n)
{
    int product = 1;
    // product of multiplying from 1 till n;
    for (int i = 1; i <= n; i++)
    {
        product *= i;
    }
    return product;
}

int nCr(int n, int r)
{
    // binary coefficient
    // nCr= n!/(n-r)!*r!

    return factorial(n) / (factorial(n - r) * factorial(r));
}

void pascalTriangle(int row)
{
    // <--rows starting from 0 index-->
    //                   // 1
    //   ^               // 1 1
    //  col 0 to row     // 1 2 1
    //   v               // 1 3 3 1
    //                   // 1 4 6 4 1
    // elements row C col (binary coEfficien nCr)

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << nCr(i, j) << " ";
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
    int n;
    cin >> n;

    // fibonacci(n);

    // for (int i = min(a, b); i < max(a, b); i++)
    // {
    //     if (isPrime(i))
    //     {
    //         cout << i << endl;
    //     }
    // }

    // factorialSum(n1);
    // factorialSum(n2);

    // cout<<factorial(n)<<endl;
    // cout << nCr(n, r) << endl;
    pascalTriangle(n);

    return 0;
}