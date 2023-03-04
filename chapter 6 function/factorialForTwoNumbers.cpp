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

bool isPrime(int n)
{
    bool flag = true;
   
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            flag = false;
        }
    }
    return flag;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a, b;
    cin >> a >> b;

    for (int i = min(a, b); i <= max(a, b); i++)
    {
        if (isPrime(i))
        {
            // cout << i << endl;
        }
    }

    // factorialSum(n1);
    // factorialSum(n2);

    return 0;
}