#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void forLoop(int counter)
{
    int sum = 0;
    for (int i = 1; i <= counter; i++)
    {
        sum += counter;
    }
    cout << sum;
}


void whileLoop(int counter){
    while (counter>=0)
    {
        cout<<counter<<endl;
        cin>>counter;
        
    }
    cout<<"exit"<<endl;
    
}

void doWhileLoop(int counter){
    do
    {
        cout<<counter<<endl;
        cin>>counter;
    } while (counter>=0);
    
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    // forLoop(n);
    // whileLoop(n);
    doWhileLoop(n);
    return 0;
}