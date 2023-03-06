#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void worsCaseN(int n, int m){
    int a=0;
    for (int i = 0; i < n; i++)
    {
        a=a+1;
    }
    for (int j = 0; j < m; j++)
    {
        a+=1;
    }
    
    cout<<a<<endl;
    
}

void worstCaseN2(int n, int m){
    int a=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a+=a.rand();
        }
        
    }
    cout<<a<<endl;
    
}

int32_t main()
{
    int n,m;
    cin >> n>>m;

    return 0;
}