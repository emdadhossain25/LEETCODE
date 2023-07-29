#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int lengthOfLIS(vector<int> &nums)
{
  int n = nums.size(), ans = 0;
  vector<int> dp(n, 1);
  for (int k = 0; k < n; k++)
  {
    for (int i = 0; i < k; i++)
    {
      if (nums[i] < nums[k])
        dp[k] = max(dp[k], dp[i] + 1);
    }
    ans = max(ans, dp[k]);
  }
  return ans;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  vector<int> n = {10, 9, 2, 5, 3, 7, 101, 18};
  cout << lengthOfLIS(n) << '\n';

  return 0;
}