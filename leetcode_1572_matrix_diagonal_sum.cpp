#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef long long ll;
#define ff first
#define ss second
#define REP(i, a, b) for (int i = a; i <= b; ++i)

int diagonalSum(vector<vector<int>> &mat)
{
  int ans = 0;
  int n = mat.size();

  if (n > 1)
  {

    // (0,0)+(1,1)+(2,2)+...+(n-1,n-1)
    int i = 0, j = 0;

    for (; i < n, j < n; i++, j++)
    {
      ans += mat[i][j];
    }

    // (0,n-1)+(1,n-1-1)+...+(n-1,0)

    i = n - 1, j = 0;
    for (; i > -1, j < n; i--, j++)
    {
      if ((i != 0 && i != n - 1) && (j != 0 && j != n - 1) && (i == j))
      {
      }
      else
      {
        ans += mat[i][j];
      }
    }
  }
  else
  {
    ans = mat[n - 1][n - 1];
  }

  return ans;
}
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  vector<vector<int>> matrix = {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9}

  };

  // vector<vector<int>> matrix = {
  //     {1, 1, 1, 1},
  //     {1, 1, 1, 1},
  //     {1, 1, 1, 1},
  //     {1, 1, 1, 1}

  // };

  // vector<vector<int>> matrix = {{5}};

  cout << diagonalSum(matrix) << endl;
  return 0;
}