#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef long long ll;
#define ff first
#define ss second
#define REP(i, a, b) for (int i = a; i <= b; ++i)
bool isAnagram(string s, string t)
{
  sort(s.begin(), s.end());
  sort(t.begin(), t.end());
  return s == t;
}
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  string s = "anagram", t = "nagaram";
  cout << isAnagram(s, t) << endl;
  return 0;
}