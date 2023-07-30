#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n=5;
int maxPathInAGrid(int sum[n][n])
{
  int ans=0;
for(int x=1;x<=n;x++){
  for(int y=1;y<=n;y++){
    // ans = max(sum[y][x-1],sum[y-1][x])+value[y][x];
    
  }
}
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
  int sum[5][5] = {{3, 7, 9, 2, 7},
                   {9, 8, 3, 5, 5},
                   {1, 7, 9, 8, 5},
                   {3, 8, 6, 4, 10},
                   {6, 3, 9, 7, 8}};
  cout << maxPathInAGrid(sum) << '\n';
  return 0;
}