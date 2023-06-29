#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef long long ll;
#define ff first
#define ss second
#define REP(i, a, b) for (int i = a; i <= b; ++i)

string freqAlphabets(string s)
{
  string ans;
  // handle two cases

  int n = s.size();
  for (int i = 0; i < n; i++)
  {
    if (i + 2 < n && s[i + 2] == '#')
    {
      // 1. return j to z if string 10# to 26#
      ans += 'j' + (s[i] - '1') * 10 + s[i + 1] - '0';
      i += 2;
    }
    else
    {

      // 2. return a to i if string is 1 to 9
      ans += 'a' + (s[i] - '1');
    }
  }

  return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  string question = "1326#";
  cout << freqAlphabets(question) << endl;
  return 0;
}