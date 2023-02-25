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
void postPreIncrementDecrement(){
    int i=1,j=2,k=3;
          //1    //2   //3
    int m= i-- - j-- - k--;
     // -4
     cout<<m<<endl;
}

void postPreIncrementDecrement2(){
    int i=10,j=20,k;
        //10  //9  //19  //20  //9  //20  //10   //19
    k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;
    cout<<i<<endl;//10
    cout<<j<<endl;//20
    cout<<k<<endl; // -20
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // prePostIncrement();
    // prePostIncrementDecrement();
    // postPreIncrementDecrement();
    postPreIncrementDecrement2();
    return 0;
}