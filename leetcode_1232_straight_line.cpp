#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef long long ll;
#define ff first
#define ss second
#define REP(i, a, b) for (int i = a; i <= b; ++i)

bool checkStraightLine(vector<vector<int>> &coordinates)
{
  // check the slopes...
  //  y1-y0/x1 -x0 = y2-y1/x2-x1
  // = (y1-y0)*(x2-x1)=(y2-y1)*(x1-x0)
  // = dy0*dx=dy*dx0
  // calculate the first slope

  int dx0 = coordinates[1][0] - coordinates[0][0];
  int dy0 = coordinates[1][1] - coordinates[0][1];

  // starting from the 3rd point, compare with the previous point
  //  if the slope is not same as the first point
  //  then it is not a straight line

  for (int i = 2; i < coordinates.size(); i++)
  {
    int dx = coordinates[i][0] - coordinates[i - 1][0];
    int dy = coordinates[i][1] - coordinates[i - 1][1];
    if (dy0 * dx != dy * dx0)
    {
      return false;
    }
  }

  return true;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  vector<vector<int>> coordinates = {
      {1, 2},
      {2, 3},
      {3, 4},
      {4, 5},
      {5, 6},
      {6, 7}};

  cout << checkStraightLine(coordinates) << endl;
  return 0;
}