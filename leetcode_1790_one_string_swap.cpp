#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef long long ll;
#define ff first
#define ss second
#define REP(i, a, b) for (int i = a; i <= b; ++i)

bool areAlmostEqual(string s1, string s2)
{
  int n = s1.size(), pos = -1;
  for (int i = 0; i < n; i++)
  {
    if (s1[i] != s2[i])
    {
      if (pos == -1)
      {
        pos = i;
      }
      else
      {
        swap(s1[i],s1[pos]);
        break;
      }
    }
  }
  return s1 == s2;
}
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  string s1, s2;
  cin >> s1;
  cin >> s2;
  cout<<areAlmostEqual(s1,s2)<<endl;
  return 0;
}