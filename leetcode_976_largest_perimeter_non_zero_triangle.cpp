#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef long long ll;
#define ff first
#define ss second
#define REP(i, a, b) for (int i = a; i <= b; ++i)

int largestPerimeter(vector<int> &nums)
{
  // side lengths x+y>z where x<=y<=z
  // sort the array first
  sort(nums.begin(), nums.end());

  // iterate from back
  for (int i = nums.size() - 1; i >= 2; i--)
  {
    if (nums[i] < nums[i - 1] + nums[i - 2])
    {
      return nums[i] + nums[i - 1] + nums[i - 2];
    }
  }
  return 0;
}
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int n;
  cin >> n;
  vector<int> nums;
  while (n > 0)
  {
    int element;
    cin >> element;
    nums.push_back(element);
    n--;
  }
  cout << largestPerimeter(nums) << endl;
  return 0;
}