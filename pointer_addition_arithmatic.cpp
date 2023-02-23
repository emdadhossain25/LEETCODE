#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    
    int a; // declare variable type int
    int *p; //declare variable type pointer of int
    a=10; // assigning variable value
    p=&a; // assigning adress of variable to pointer variable

    cout<<*p<<endl; // dereferencing value at p

    int b=1;
    *p=b;
    cout<<a<<endl; // print value of a

    cout<<(p+1)<<endl; // print p+1 value

    cout<<&b<<endl; // print address 
    cout<<b<<endl; // print value

    cout<<*(p+1)<<endl; // print value at dereferencing pointer

    return 0;
}