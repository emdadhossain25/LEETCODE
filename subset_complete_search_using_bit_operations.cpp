#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void search(int k)
{
  for (int b = 0; b < (1 << k); b++)
  {
    vector<int> subset;
    for (int i = 0; i < k; i++)
    {
      // this if checks if the number is greater or equal to 1;
      if(b &(i<<1)) subset.push_back(i);
    }
  }
 
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int n;
  cin >> n;

  return 0;
}