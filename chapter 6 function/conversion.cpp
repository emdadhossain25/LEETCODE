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
        power *= 2;
        n /= 10;
    }
    return answer;
}

int octalToDecimal(int n)
{
    int answer = 0;
    int power = 1;
    while (n > 0)
    {
        int multiplier = n % 10;
        answer += power * multiplier;
        power *= 8;
        n /= 10;
    }
    return answer;
}

int hexaDecimalToDecimal(string n)
{
    int answer = 0;
    int power = 1;
    int s = n.size();
    for (int i = s - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            answer += power * (n[i] - '0');
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            // n[i]-A = returns 0,1,2
            answer += power * (n[i] - 'A' + 10);
        }
        power *= 16;
    }
    return answer;
}
int decimalToBinary(int n){
    int answer=0;
    int power =1;

     

    return answer;
}
int32_t main()
{
    string n;
    cin >> n;
    // cout << binaryToDecimal(n) << endl;
    // cout << octalToDecimal(n) << endl;
    cout << DecimalToBinary(n) << endl;
    // cout << hexaDecimalToDecimal(n) << endl;
    return 0;
}