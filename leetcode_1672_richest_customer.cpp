#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef long long ll;
#define ff first
#define ss second
#define REP(i, a, b) for (int i = a; i <= b; ++i)

int maximumWealth(vector<vector<int>> &accounts)
{
  int ans = 0;

  for (auto x : accounts)
  {
    ans = max(ans, accumulate(x.begin(), x.end(), 0));
  }
  return ans;
}
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  vector<vector<int>> accounts = 
  // {{1, 2, 3}, {3, 2, 1}};
  {{1,5},{7,3},{3,5}};
  cout << maximumWealth(accounts) << endl;
  return 0;
}