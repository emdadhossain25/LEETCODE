#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef long long ll;
#define ff first
#define ss second
#define REP(i, a, b) for (int i = a; i <= b; ++i)

int nearestValidPoint(int x, int y, vector<vector<int>> &points)
{
  int ans = -1,mi=INT_MAX;
  for (int i = 0; i < points.size(); i++)
  {
    auto p = points[i];
    if(x==p[0] || y==p[1]){
      int di = abs(x-p[0])+abs(y-p[1]);
      if(mi>di){
        // replace with smaller distance
        mi=di;

        // update the index for result;
        ans=i;
      }
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
  int x;
  cin >> x;
  int y;
  cin >> y;
  vector<vector<int>> vector1 ={{3,4}};
  //  {
  //     {1, 2}, {3, 1}, {2, 4}, {2, 3}, {4, 4}};

  cout << nearestValidPoint(x, y, vector1) << endl;

  return 0;
}