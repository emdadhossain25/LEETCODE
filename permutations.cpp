#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> permutation(int n)
{
  vector<int> pv;
  for (int i = 0; i < n; i++)
  {
    pv.push_back(i);
  }
  do
  {
    // permuation
  } while (next_permutation(pv.begin(), pv.end()));
  return pv;
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int n;
  cin >> n;
  vector<int> result = permutation(n);
  for (auto x : result)
  {
    cout << x << '\n';
  }
  return 0;
}