#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    char button;
    cout << "Input a character: "<<endl;
    cin >> button;
    switch (button)
    {
    case 'a':
        cout << "hello a" << endl;
        break;

    case 'b':
        cout << "hello b" << endl;
        break;

    case 'c':
        cout << "hello c" << endl;
        break;

    case 'd':
        cout << "hello d" << endl;
        break;

    case 'e':
        cout << "hello e" << endl;
        break;

    default:
        cout << "default button" << endl;
        break;
    }
    return 0;
}