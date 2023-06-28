#include <bits/stdc++.h>
#include <iostream>

using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef long long ll;
#define ff first
#define ss second
#define REP(i, a, b) for (int i = a; i <= b; ++i)

char findTheDifference(string s, string t)
{
  sort(s.begin(), s.end());
  sort(t.begin(), t.end());
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] != t[i])
    {
      return t[i];
    }
  }
  return t.back();
}
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  // string s = "abcd", t = "abcde";
  // string s = "", t = "y";
  string s = "e", t = "ee";
  cout << findTheDifference(s, t) << endl;

  return 0;
}