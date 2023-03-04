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
    return product ;
}

int nCr(int n,int r){
    // binary coefficient
    // nCr= n!/(n-r)!*r!
    
    return factorial(n)/(factorial(n-r)*factorial(r));
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n,r;
    cin >> n>>r;

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
    cout<<nCr(n,r)<<endl;

    return 0;
}