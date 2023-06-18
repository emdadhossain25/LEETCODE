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
  // {0,1,0,3,12};
  // {1,3,12,0,0};

  int n=nums.size();
  vector<int> ans;
  int countNumbers = 0;
  for (int val : nums)
  {
    if (val != 0)
    {
      ans.push_back(val);
    }
    else
    {
      countNumbers++;
    }
  }
  while (countNumbers--)
  {
    ans.push_back(0);
  }

  for (int i = 0; i < n; i++)
  {
    nums[i]=ans[i];
  }
  
}
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  vector<int> input = {0, 1, 0, 3, 12};
  vector<int> result = moveZeroes(input);
  cout<<result[2]<<endl;
  return 0;
}