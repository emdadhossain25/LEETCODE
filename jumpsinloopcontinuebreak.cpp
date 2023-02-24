#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void nehasDayOut()
{
    for (int i = 1; i <= 30; i++)
    {
        int pocketMoney = 3000;
        if (i % 2 == 0)
        {
            continue;
            // we will move to the next iteration;
        }
        if (pocketMoney == 0)
        {
            break;
        }

        cout << "Go Out today" << endl;
        pocketMoney -= 300;
    }
}

void checkDivisibleBy3(){
    for (int i = 0; i < 100; i++)
    {
        if (i%3==0)
        {
            continue; //skip    
        }
        cout<<i<<endl;
        
    }
    
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // nehasDayOut();
    checkDivisibleBy3();
    return 0;
}