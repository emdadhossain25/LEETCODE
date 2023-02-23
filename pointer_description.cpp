#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int a = 1025;
    int *p;
    p = &a;
    cout << "size of inger is " << sizeof(int) << endl;
    cout << "address= " << p << " value is= " << *p << endl;

    char *p0;
    p0 = (char*)p;

    cout << "size of char is " << sizeof(char) << endl;
    cout << "address= " << p0 << " value is= " << *p0 << endl;

    return 0;
}