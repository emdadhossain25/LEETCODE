#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef long long ll;
#define ff first
#define ss second
#define REP(i, a, b) for (int i = a; i <= b; ++i)

vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c)
{

  int m = mat.size();
  int n = mat[0].size();
  int k = m * n;
  if(r*c!=k){
    return mat;
  }
  vector<vector<int>> ans(r,vector<int>(c));
  for(int i =0; i<k;i++){
    ans[i/c][i%c]=mat[i/n][i%n];
  }
  return ans;
}
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  vector<vector<int>> mat = {{1, 2}, {3, 4}};
  int r = 1;
  int c = 4;
  vector<vector<int>> result = matrixReshape(mat, r, c) ;
  cout <<  result[0][3]<< endl;
  return 0;
}