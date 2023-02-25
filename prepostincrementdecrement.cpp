#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int i =2;
        //2   //4
    i = i++ + ++i;
    cout<<i<<endl;
    return 0;
}