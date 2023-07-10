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
  vector<int> v = {1, 2, 6, 3, 9, -1};
  sort(v.begin(), v.end());
  for (auto x : v)
    cout << x << '\n';
  sort(v.rbegin(), v.rend());
  cout << '\n';

  for (auto x : v)
    cout << x << '\n';
  cout << '\n';

  int a[] ={2,3,1,5};
  int n=sizeof(a)/sizeof(a[0]);
  sort(a,a+n);
   for (auto x : a)
    cout << x << '\n';
  cout << '\n';

  string s = "monkey";
  sort(s.begin(),s.end());
   for (auto x : s)
    cout << x << '\n';
  cout << '\n';

  sort(s.rbegin(),s.rend());
   for (auto x : s)
    cout << x << '\n';
  cout << '\n';

  return 0;
}