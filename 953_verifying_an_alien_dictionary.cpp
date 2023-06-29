#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef long long ll;
#define ff first
#define ss second
#define REP(i, a, b) for (int i = a; i <= b; ++i)

bool isAlienSorted(vector<string> &words, string order)
{
  int m[26];
  // map new order
  for (int i = 0; i < 26; i++)
    m[order[i] - 'a'] = i;

  // replace with the new order
  for (auto &w : words)
  {
    for (auto &c : w)
    {
      c = m[c - 'a'] + 'a';
    }
  }
  // check is sorted
  return is_sorted(words.begin(), words.end());
}
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  vector<string> words = {"word", "world", "row"};
  string order = "worldabcefghijkmnpqstuvxyz";
  cout << isAlienSorted(words, order) << endl;
  return 0;
}