#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int countMatches(vector<vector<string>> &items, string ruleKey, string ruleValue)
{
  int ans = 0;
  int n = items.size();
  int counterForIteration = 0;
  int typeIndex;
  if (ruleKey == "color")
    typeIndex = 1;
  else if (ruleKey == "type")
    typeIndex = 0;
  else
    typeIndex = 2;
  while (counterForIteration < n)
  {
    if (items[counterForIteration++][typeIndex] == ruleValue)
      ans++;
  }
  cout << ans << '\n';

  return ans;
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  vector<vector<string>> items = {{"phone", "blue", "pixel"}, {"computer", "silver", "lenovo"}, {"phone", "gold", "iphone"}};

  string ruleKey = "phone", ruleValue = "pixel";
  countMatches(items, ruleKey, ruleValue);

  return 0;
}