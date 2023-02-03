#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// input [-4,-1,0,3,10]
// output [0,1,9,16,100]
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    vector<int> nums;
    nums={-4,-1,0,3,10};
    vector<int> result(nums.size());
    int l=0;
    int r=nums.size()-1;
    int k=nums.size()-1; // index for result array

    while(k>=0){
        if(abs(nums[l])>abs(nums[r])){
            result[k]=nums[l]*nums[l];
            k--;
            l++;
        }else{
            result[k]=nums[r]*nums[r];
            k--;
            r--;
        }
    }
    int count=result.size();
    while(count){
        cout<<result[count-1]<<endl;
        count--;
    }
    }