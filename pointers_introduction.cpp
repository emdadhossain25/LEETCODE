#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int a;
    // compiler and data type defines amount of memory in ram
    // char=1, int,float=4 (bytes of memory)
    // stores the first address value for 4 byte variable in a pointer
    // declaring pointer variable (of type int variable address)
    int *p = &a; // pointer to integer type variable
    a = 5;
    // prints the value of pointervariable
    cout << "value at p " << p << endl;

    // prints address of variable a
    cout << "address at a " << &a << endl;

    // prints address of variable p
    cout << "address of p " << &p << endl;

    // prints variable value at address dereferencing
    cout << "value of a using dereferencing " << *p << endl;
    *p = 8;
    cout << "changed value of a using *p " << a << endl;
    return 0;
}