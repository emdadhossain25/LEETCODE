#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void prePostIncrement(){
    int i = 1;
    int j = 2;
    int k;
        //1 //2  //1  //2   //3   //4
    k = i + j + i++ + j++ + ++i + ++j;
    cout << k << endl;
}

void prePostIncrementDecrement(){
    int i = 0;
       //0    //0   //1   //1
    i = i++ - --i + ++i - i--;
  //0
  cout<<i<<endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // prePostIncrement();
    prePostIncrementDecrement();
    return 0;
}