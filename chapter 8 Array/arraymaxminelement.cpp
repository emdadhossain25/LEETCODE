#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    int n,
        maxNumber = INT_MIN,
        minNumber = INT_MAX;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int j = 0; j < n; j++)
    {

        maxNumber= max(arr[j],maxNumber);
        minNumber=min(arr[j],minNumber);
    }
    cout << maxNumber << " " << minNumber << endl;

    return 0;
}