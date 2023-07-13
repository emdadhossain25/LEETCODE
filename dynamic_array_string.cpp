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
  string s = "aaa"; // value of
  string b = s + s;
  cout << b << '\n'; // returns aaaaaa
  b[3] = 'b';
  cout << b << '\n';            // returns aaabaa
  cout << b.substr(3, 3) << '\n'; // starts from 3 and counts 4 after 3 returns baa

  return 0;
}