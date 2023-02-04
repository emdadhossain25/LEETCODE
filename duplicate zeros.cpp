// Given a fixed-length integer array arr, duplicate each occurrence of zero, shifting the remaining elements to the right.

// Note that elements beyond the length of the original array are not written. Do the above modifications to the input array in place and do not return anything.

// Example 1:

// Input: arr = [1,0,2,3,0,4,5,0]
// Output: [1,0,0,2,3,0,0,4]
// Explanation: After calling your function, the input array is modified to: [1,0,0,2,3,0,0,4]
// Example 2:

// Input: arr = [1,2,3]
// Output: [1,2,3]
// Explanation: After calling your function, the input array is modified to: [1,2,3]

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    vector<int> arr = {1,0,2,3,0,4,5,0};

    //calculate shift using number of 0s from left to right 
    // change array operating on the indexes from right to left

    int i=0;
    int sh=0;
    for(i=0; i+sh<arr.size();++i){
        sh+=arr[i]==0;
    }
    for(i=i-1;sh>0;--i){
        if(i+sh<arr.size()) arr[i+sh]=arr[i];
        if(arr[i]==0) arr[i+ --sh]=arr[i];
    }
    std::copy(std::begin(arr),
          std::end(arr),
          std::ostream_iterator<int>(std::cout,", "));

    return 0;
}