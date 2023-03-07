#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int findElement, int size)
{
    int result = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == findElement)
        {
            result = i;
            break;
        }
    }
    return result;
}
int32_t main()
{
    int n;
    cin >> n;
    int arr[n];
    // = {12, 18, 20, 42, 8, 10};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int findElement;
    cin >> findElement;
    cout << linearSearch(arr, findElement, n);

    return 0;
}