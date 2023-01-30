#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int findConsecutive1s(vector<int>& nums){
    int counter=0;
    int result=0;
    for (int i = 0; i < nums.size(); i++)
    {
        if(nums[i]==0){
counter=0;
        }else{
            counter=counter+1;
        }
         if(result<counter){
        result=counter;
    }
    }
   
    
    return result;

}
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    vector<int> nums{1,1,0,1};
    cout<<""<<findConsecutive1s(nums)<<endl;
    
    return 0;
}

