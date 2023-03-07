#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int findElement, int n)
{

    int startIndex = 0;
    int endIndex = n - 1;

    while (startIndex <= endIndex)
    {
        int midIndex = (endIndex + startIndex) / 2;
        if (findElement > arr[midIndex])
        {
            startIndex = midIndex + 1;
        }
        else if (findElement < arr[midIndex])
        {
            endIndex = midIndex - 1;
        }
        else
        {
            return midIndex;
        }
    }

    return -1;
}

int32_t main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int findElement;

    cin >> findElement;

    cout << binarySearch(arr, findElement, n);

    return 0;
}