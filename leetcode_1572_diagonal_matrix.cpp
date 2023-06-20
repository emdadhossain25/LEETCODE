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
  int n = mat.size();
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    // add elements (0,0)+(1,1+(2,2) + .. +(n-1,n-1)
    ans += mat[i][i];

    // add elements (0,n-1)+(1,n-2)+.....+(n-1.0)
    ans += mat[n - 1 - i][i];
  }
  if (n % 2 == 1)
  {
    // if n%2==1 (for odd) substract the middle (n/2,n/2)

    ans -= mat[n / 2][n / 2];
  }
  return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  // vector<vector<int>> matrix = {
  //     {1, 2, 3},
  //     {4, 5, 6},
  //     {7, 8, 9}

  // };

  // vector<vector<int>> matrix = {
  //     {1, 1, 1, 1},
  //     {1, 1, 1, 1},
  //     {1, 1, 1, 1},
  //     {1, 1, 1, 1}

  // };

  vector<vector<int>> matrix = {{5}};

  cout << diagonalSum(matrix) << endl;
  return 0;
}