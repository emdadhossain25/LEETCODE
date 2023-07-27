#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(int x)
{
  vector<int> c = {1, 3, 4};

  if (x < 0)
    return std::numeric_limits<int>::max();
  if (x == 0)
    return 0;
    
  int best = std::numeric_limits<int>::max();
  for (auto coin : c)
  {
    best = min(best, solve(x - coin) + 1);
  }

  return best;
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  cout << solve(10) << '\n';
  return 0;
}