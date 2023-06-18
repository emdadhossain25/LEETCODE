#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef long long ll;
#define ff first
#define ss second
#define REP(i, a, b) for (int i = a; i <= b; ++i)
vector<int> moveZeroes(vector<int> &nums)
{

  // move zeroes to left
  int leftNonzero = 0;
  for (int i = 0; i < nums.size(); i++)
  {
    if (nums[i] != 0)
    {
      nums[leftNonzero++] = nums[i];
    }
  }

  for (int i = leftNonzero; i < nums.size(); i++)
  {
    nums[i] = 0;
  }
  return nums;
}
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  vector<int> nums = {0, 1, 0, 3, 12};
  nums = moveZeroes(nums);
  cout << nums[1] << endl;
  return 0;
}