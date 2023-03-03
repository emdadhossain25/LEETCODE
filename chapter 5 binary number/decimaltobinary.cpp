#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void checkPrime()
{
    int n;
    cin >> n;
    bool flag = 0;
    // sqrt n will cover all number
    for (int i = 2; i < sqrt(n); i++)
    {
        cout << sqrt(n) << endl;
        if (n % i == 0)
        {
            cout << "Not prime" << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Prime" << endl;
    }
}
void reverseNumber()
{
    // 1234 input
    // 4321 output
    int n;
    cin >> n;
    int reverse = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        reverse = reverse * 10 + lastDigit;
        n /= 10;
    }
    cout << reverse << endl;
}

void armstrongNumber()
{
    // cube all digits add the sum will the original number

    int n;
    cin >> n;
    int original = n;
    int sum = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        sum = sum + pow(lastDigit, 3);
        n /= 10;
    }
    cout << sum << endl;
    if (original == sum)
    {
        cout << "armstrong" << endl;
    }
    else
    {
        cout << "not armstrong" << endl;
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // checkPrime();
    // reverseNumber();
    armstrongNumber();

    return 0;
}