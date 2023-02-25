#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int i = 1;
    int j = 2;
    int k;
           // 1   //3
    // i = i++ + ++i;
        //1 //2  //1  //2   //3   //4
    k = i + j + i++ + j++ + ++i + ++j;
    cout << k << endl;
    return 0;
}