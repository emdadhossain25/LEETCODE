#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  float a, b;
  cin >> a >> b;
  if (abs(a - b) < 1e-9)
  {
    cout << "around 0" << '\n';
  }
  else
  {
    cout << abs(a - b) << '\n';
  }
  return 0;
}