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
  int n, m;

  cin >> n >> m;
  // calculate factorial of number n;
  int x = 1;
  for (int i = n; i >= 2; i--)
  {
    x = (x * i) % m; // is equivalent to mod of (x%m*i%m)%m ;
  }
  if (x < 0)
    x += m; // if x is negative we can remove negative value by adding mod; needed only for substraction
  cout << x << '\n';
  return 0;
}