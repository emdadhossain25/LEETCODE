#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

int a;
int div;
cin>>a;
while (a>1)
{
    div=2;
    while (div<a)
    {
        if(a%div==0){
            --a;
        }else{
            ++div;
        }
    }
    cout<<a<<endl;
    
    --a;
}

    return 0;
}