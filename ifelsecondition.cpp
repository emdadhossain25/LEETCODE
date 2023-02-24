#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int savings;
    cin >> savings;
    if (savings > 5000)
    {
        if (savings>10000)
        {
            cout<<"Roadtrip with neha"<<"\n";   
        }else
        {
            cout<<"Shopping with neha"<<"\n";
        }
        
    }
    else if (savings > 2000)
    {
        cout << "Rashmi" << endl;
    }
    else
    {
        cout << "Friends" << endl;
    }
    return 0;
}