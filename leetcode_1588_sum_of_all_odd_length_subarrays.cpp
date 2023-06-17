#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef long long ll;
#define ff first
#define ss second
#define REP(i, a, b) for (int i = a; i <= b; ++i)

int sumOddLengthSubarrays(vector<int> &arr)
{
  int ans = 0, n = arr.size();
  for (int i = 0; i < n; i++)
  {
    int sum = 0;
    for (int j = i; j < n; j++)
    {
      sum += arr[j];
      if ((j - i + 1) & 1)
      {
        ans += sum;
        cout<<ans<<endl;
      }
    }
  }
  return ans;
}
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  vector<int> nums = {1, 4, 2, 5, 3};
  cout << sumOddLengthSubarrays(nums) << endl;
  return 0;
}