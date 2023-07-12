#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int binary_search(vector<int> &v, int x)
{
  int a = 0;
  int b = v.size() - 1;
  while (b >= a)
  {
    int k = (b + a) / 2;
    if (v[k] == x)
      return k;
    else if (v[k] > x)
      b = k - 1;
    else
      a = k + 1;
  }
  return -1;
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  vector<int> v = {2, 1, 3, 4, 1, 5, -2};
  sort(v.begin(), v.end());
  cout << binary_search(v, 5) << '\n';
  return 0;
}