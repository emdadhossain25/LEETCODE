#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef long long ll;
#define ff first
#define ss second
#define REP(i, a, b) for (int i = a; i <= b; ++i)
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  // string haystack="sadcodesad";
  // string needle="sad";
  // string haystack="leetcode";
  // string needle="leeto";
  // string haystack = "a";
  // string needle = "a";
  // string haystack = "abc";
  // string needle = "c";
  string haystack = "aaa";
  string needle = "aaaa";
  int index = -1;

  if (haystack.size()>=needle.size())
  {
  if ((haystack.size() - needle.size()) == 0)
  {
    if (haystack == needle)
    {
      index = 0;
    }
    cout << index << endl;
    return index;
  }
  else
  {

    for (int i = 0; i <= (haystack.size() - needle.size()); i++)
    {
      if (haystack.substr(i, needle.size()) == needle)
      {
        if (index != -1)
          index = min(index, i);
        else
          index = i;
      }
    }
  }
  }else{
   return index;
  }
  

  cout << index << endl;
  return 0;
}