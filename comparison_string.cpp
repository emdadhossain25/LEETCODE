#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool comp(string a, string b)
{
  if (a.size() != b.size())
    return a.size() < b.size();
  return a < b;
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  vector<string> v = {"bd", "ac"};
  sort(v.begin(), v.end(), comp);
  for (auto x : v)
    cout << x << '\n';

  return 0;
}