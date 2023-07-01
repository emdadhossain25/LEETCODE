#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef long long ll;
#define ff first
#define ss second
#define REP(i, a, b) for (int i = a; i <= b; ++i)

bool containsDuplicateUsingSorting(vector<int> &nums)
{
  // we can sort and compare consecutive elements if they match return true
  // 1, 2, 3, 1 -> 1, 1,2, 3
  sort(nums.begin(), nums.end());
  for (int i = 1; i < nums.size(); i++)
  {
    if (nums[i] == nums[i - 1])
    {
      return true;
    }
  }
  return false;
}

bool containsDuplicate(vector<int> &nums)
{
  // we can use set data structure
  set<int> x;
  for(auto n:nums){
    if(x.count(n)){
      //appearing second time
      return true;
    }
    x.insert(n);
  }
  return false;
}
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  vector<int> nums = {1, 2, 3, 1};
  cout << containsDuplicate(nums) << endl;
  return 0;
}