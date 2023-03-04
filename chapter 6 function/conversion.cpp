#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n)
{
    int answer = 0;
    int power = 1;
    while (n > 0)
    {
        int multiplier = n % 10;
        answer += multiplier * power;
        power*=2;
        n /= 10;
    }
    return answer;
}

int32_t main()
{
    int n;
    cin >> n;
    cout << binaryToDecimal(n) << endl;
    return 0;
}