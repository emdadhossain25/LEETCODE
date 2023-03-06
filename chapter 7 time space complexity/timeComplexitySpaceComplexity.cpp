#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void worsCaseN(int n, int m)
{
    // n+n=2n
    int a = 0;

    for (int i = 0; i < n; i++)
    {
        a = a + 1;
    }
    for (int j = 0; j < m; j++)
    {
        a += 1;
    }

    cout << a << endl;
}

void worstCaseN2(int n, int m)
{
    // n*m = nm ~ n2
    int a = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a += a.rand();
        }
    }
    cout << a << endl;
}
void worstCaseLogN(int n)
{
    // n/2 pow 0 or 1
    // n/2pow1
    // n/4 2pow2

    // suppose this runs for K times

    // so the finally  for last >=1 it will run till n/2powerk
    // n/2powerk>=1
    // n>=2powerk
    // logn>=k
    // k<=logn

    int a = 0;
    int i = n;
    while (i >= 1)
    {
        a += 1;
        i /= 2;
    }
}

void worstCaseNLogN(int n)
{
    int a = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j += i)
        {
            // here i=1 , j runs for 1, 2, ...n
            // here i=2 , j runs for 1,3,5, .... n/2
            // here i=3 , j runs for 1,4,7, .....n/7
            // ...........................
            // here i=n , j runs for 1
            // .....................
            // worst case = n(1+2+3+ ...n/3+n/2+n)
            // wors case O =n(logn)
            // O=nlogn;

            a += 1;
        }
    }
}

int32_t main()
{
    int n, m;
    cin >> n >> m;

    return 0;
}