#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// time complexity: n/2, n/4~ n/2powern~ log2n or logn
int binarySearch(int arr[], int findElement, int n)
{

    int startIndex = 0;
    int endIndex = n - 1;
    while (startIndex <= endIndex)
    {
        int midIndex = (startIndex + endIndex) / 2;
        if (arr[midIndex] == findElement)
        {
            return midIndex;
        }
        else if (findElement > arr[midIndex])
        {
            startIndex = midIndex + 1;
        }
        else
        {
            endIndex = midIndex - 1;
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