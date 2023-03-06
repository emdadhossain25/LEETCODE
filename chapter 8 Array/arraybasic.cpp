#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<arr[n-1];
    
    return 0;
}