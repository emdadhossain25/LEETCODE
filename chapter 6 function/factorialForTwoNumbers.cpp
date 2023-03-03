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
void primeNumbersBetweenTwoinputs(int startNumber, int endNumber)
{

    while (endNumber >= startNumber)
    {
        bool flag = 0; // to check full iteration

        for (int i = 2; i < endNumber; i++)
        {
            if (endNumber % i == 0)
            {
                flag = 1;
                break;
            }
        }
        // if full iteration from 2 to endNumber-1 done
        // without dividing then its a prime
        if (flag == 0)
        {
            cout << endNumber << endl;
        }

        endNumber--;
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n1, n2;
    cin >> n1 >> n2;
    // factorialSum(n1);
    // factorialSum(n2);
    primeNumbersBetweenTwoinputs(min(n1, n2), max(n1, n2));
    return 0;
}