#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int kadanes_algorithm(int input[], int n)
{
  int best = 0, sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum = max(sum, sum + input[i]);
    best = max(sum, best);
  }
  return best;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int a[] = { -2, -3, 4, -1, -2, 1, 5, -3 };
  int n = sizeof(a) / sizeof(a[0]);
  cout << kadanes_algorithm(a, n) << '\n';

  return 0;
}